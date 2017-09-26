var app = new Framework7({
    modalTitle: "Inventory Demo",
    //material: true,
    pushState: true,
    template7Pages: true,
    precompileTemplates: false,
    template7Data: {
        'url:items.html': function () {
            return {
                items: getItems()
            };
        }
    }
});

// Export selectors engine
var $$ = Dom7;

// Add view
var mainView = app.addView('.view-main', {
    // Because we use fixed-through navbar we can enable dynamic navbar
    // dynamicNavbar: true
});

var scanners = Rho.Barcode.enumerate();

for (var i = 0; i < scanners.length; i++) {
    console.log("friendlyName = " + scanners[i].friendlyName);
    console.log("scannerType = " + scanners[i].scannerType);
}

app.scanner = scanners.find(function (each) {
    return (each.friendlyName === "2D Barcode Imager") || (each.friendlyName === "2D Imager");
});

app.saveItem = function (anItem, callback) {
    var cb = callback || function () {
        };
    var data = {
        object: anItem.object,
        upc: anItem.upc,
        productName: anItem.productName,
        quantity: anItem.quantity,
        photoUri: anItem.photoUri,
        updatedAt: new Date().toString()
    };
    var url;
    if (data.object != null) {
        console.log("Item is updating", data);
        url = '/app/InventoryItem/update/' + data.object;
    } else {
        console.log("Item is creating", data);
        url = "/app/InventoryItem/create"
    }

    $$.ajax({
        url: url,
        async: true,
        method: "POST",
        data: data,
        success: callback,
        error: function (error) {
            console.log("error", error);
        }
    });

};


// main entry
mainView.router.loadPage({url: "login.html"});
//mainView.router.loadPage({url: "items.html"});

// Common page callbacks
app.onPageBeforeAnimation("*", function (aPage) {
    $$(".back").on("click", function () {
        mainView.router.back({url: aPage.fromPage.url, force: true, ignoreCache: true});
    });
});
app.onPageBack("*", function (aPage) {
    if (app.scanner != null) {
        app.scanner.disable();
    }
});

// Page callbacks for particular pages
app.onPageBeforeAnimation("login", function () {
    var timeoutId;
    var hideLoginFailedMessage = function () {
        $$(".login-failed").css("display", "none");
        timeoutId = null;
    };

    var scannerCallback = function (value) {
        if (timeoutId) {
            hideLoginFailedMessage();
            clearTimeout(timeoutId);
        }
        console.log("value: " + JSON.stringify(value));
        if (app.scanner.scannerType === "Camera") {
            var username = value.barcode;
        }
        else {
            var username = value.data;
        }
        app.showPreloader("Logging in as " + username);
        Rho.RhoConnectClient.login(username, "", function (value) {
            app.hidePreloader();
            if (value.error_code === "0") {
                app.scanner.disable();
                mainView.router.loadPage({url: 'items.html'});
            }
            else {
                $$(".login-failed").find(".message").text("Login as \"" + username + "\" failed");
                $$(".login-failed").css("display", "initial");
                timeoutId = setTimeout(hideLoginFailedMessage, 3000);
            }
        });
    };

    if (app.scanner != null) {
        app.scanner.enable({}, scannerCallback);
    }
});

app.onPageBeforeAnimation("items", function (aPage) {

    scannerCallback = function (value) {
        //TODO: Implement findItemByUPC at Item_Controller and use this method here

        var barcode = value.data;

        var item = getItems().find(function (each) {
            return each.upc === barcode
        });

        if (item != null) {
            viewItem(item);
        }
        else {
            app.scanner.disable();
            mainView.router.loadPage({url: 'new-item.html', context: {upc: barcode}, ignoreCache: true});
        }
    };

    if (app.scanner != null) {
        app.scanner.enable({}, scannerCallback);
    }

    $$(".view-item").on("click", function (e) {
        var id = $$(e.currentTarget).data("item-id");
        var item = getItem(id);
        viewItem(item);
    });

    var viewItem = function (anItem) {
        app.scanner.disable();
        mainView.router.loadPage({url: 'view-item.html', context: {item: anItem}, ignoreCache: true});
    }

    $$('.swipeout').on('swipeout:deleted', function (e) {
        var id = $$(this).data("item-id");
        deleteItemById(id);
    });

    $$('.edit-item').on('click', function (e) {
        app.scanner.disable();
        var id = $$(e.currentTarget).data("item-id");
        var item = getItem(id);
        mainView.router.loadPage({url: 'edit-item.html', context: {item: item}, ignoreCache: true});
    });

});

app.onPageBeforeAnimation("new-item", function (aPage) {

    var backUrl = aPage.fromPage.url;
    var quantity = 1;
    var upc = aPage.context.upc;


    var scannerCallback = function (value) {
        if (value.data === upc) {
            quantity = quantity + 1;
            $$("#qty").val(quantity);
        }

    };
    if (app.scanner != null) {
        app.scanner.enable({}, scannerCallback);
    }

    var onPageLeave = function () {
        if (app.scanner != null) {
            app.scanner.disable();
        }
        Rho.KeyCapture.captureTrigger();
        Rho.KeyCapture.captureKey(true, 66);
    };

    var cameraCallback = function (value) {
        if (value.status === "ok") {
            var filename = value.imageUri;
            $$(".photo").find("img").attr("src", filename);
            $$(".photo").find("input").val(filename);
            $$(".photo").css("display", "initial");
            $$(".photo-hint").css("display", "none");
        }
    };

    var takingPicture = function () {
        var camera = Rho.Camera.getCameraByType(Rho.Camera.CAMERA_TYPE_BACK);
        var photoFilename = Rho.RhoFile.join(Rho.Application.databaseBlobFolder, new Date().getTime().toString());
        var options = {
            fileName: photoFilename,
            desiredWidth: 480,
            desiredHeight: 800,
            enableEditing: false,
            useSystemViewfinder: false
        };
        camera.takePicture(options, cameraCallback);
    };

    function captureKeyCallback(result) {
        // 66 - touch button
        // 84 - P3 key on ET1
        if ((result.keyValue !== 66) && (result.keyValue !== 84)) {
            return;
        }
        takingPicture();
    }

    // taking photo
    function triggerCallback(result) {
        // 103 - trigger button
        // 104 - PTT button
        if (result.triggerFlag === 104) {
            takingPicture();
        }
    }

    Rho.KeyCapture.captureKey(true, 'all', captureKeyCallback);
    //Rho.KeyCapture.captureTrigger(triggerCallback);

    $$(".take-picture").on("click", function () {
        takingPicture();
    });

    $$(".save-item").on("click", function () {
        var form = $$("form")[0];
        if (form.reportValidity && !form.reportValidity()) {
            return;
        }
        var item = {
            upc: $$("#upc").val(),
            productName: $$("#product-name").val(),
            quantity: quantity,
            photoUri: $$(".photo").find("input").val(),
            updatedAt: new Date()
        };
        app.saveItem(item, function () {
            onPageLeave();
            mainView.router.back({url: backUrl, force: true, ignoreCache: true});
        });

    });
});

app.onPageBeforeAnimation("edit-item", function (aPage) {

    var backUrl = aPage.fromPage.url;
    var item = aPage.context.item;

    var scannerCallback = function (value) {
        if (value.data === item.upc) {
            item.quantity = item.quantity + 1;
            $$("#qty").val(item.quantity);
        }

    };
    if (app.scanner != null) {
        app.scanner.enable({}, scannerCallback);
    }

    var onPageLeave = function () {
        if (app.scanner != null) {
            app.scanner.disable();
            Rho.KeyCapture.captureTrigger();
            Rho.KeyCapture.captureKey(true, 66);
        }
    };

    var cameraCallback = function (value) {

        if (value.status === "ok") {
            var filename = value.imageUri;
            $$(".photo").find("img").attr("src", filename);
            $$(".photo").find("input").val(filename);
            $$(".photo").css("display", "initial");
            $$(".photo-hint").css("display", "none");
        }
    };

    var takingPicture = function () {
        var camera = Rho.Camera.getCameraByType(Rho.Camera.CAMERA_TYPE_BACK);
        var photoFilename = Rho.RhoFile.join(Rho.Application.databaseBlobFolder, new Date().getTime().toString());
        var options = {
            fileName: photoFilename,
            desiredWidth: 480,
            desiredHeight: 800,
            enableEditing: false,
            useSystemViewfinder: false
        };
        camera.takePicture(options, cameraCallback);
    };

    function captureKeyCallback(result) {
        // 66 - touch button
        if (result.keyValue !== 66) {
            return;
        }
        takingPicture();
    }

    // taking photo
    function triggerCallback(result) {
        // 103 - trigger button
        // 104 - PTT button
        if (result.triggerFlag === 104) {
            takingPicture();
        }
    }

    Rho.KeyCapture.captureKey(true, 66, captureKeyCallback);
    //Rho.KeyCapture.captureTrigger(triggerCallback);

    $$(".take-picture").on("click", function () {
        takingPicture();
    });

    $$(".save-item").on("click", function () {
        var form = $$("form")[0];

        if (form.reportValidity()) {
            item.upc = $$("#upc").val();
            item.productName = $$("#product-name").val();
            item.photoUri = $$(".photo").find("input").val();
            item.updatedAt = new Date();
            app.saveItem(item, function () {
                onPageLeave();
                mainView.router.back({url: backUrl, force: true, ignoreCache: true});
            });
        }
    });

});

app.onPageBeforeAnimation("view-item", function (aPage) {

    var backUrl = aPage.fromPage.url;
    var item = aPage.context.item;

    scannerCallback = function (value) {
        console.log("Scanner callback on page", aPage.url, value);
        if (value.data === item.upc) {
            item.quantity = item.quantity + 1;
            $$(".quantity").text(item.quantity);
            item.updatedAt = new Date();
            app.saveItem(item);
        }
    };

    if (app.scanner != null) {
        app.scanner.enable({}, scannerCallback);
    }

});

var getItems = function () {
    var items = [];
    $$.ajax({
            url: '/app/InventoryItem/items',
            async: false,
            method: "GET",
            success: function (data) {
                items = JSON.parse(data);
                items.forEach(function (each) {
                    var qty = Number.parseInt(each.quantity);
                    each.quantity = Number.isNaN(qty) ? 0 : qty;
                    each.photoSrc = Rho.Application.expandDatabaseBlobFilePath(each.photoUri);
                    each.updatedAt = new Date(each.updatedAt);
                })
            },
            error: function (error) {
                console.log("error", error);
            }
        }
    );
    items.sort(function (a, b) {
        return a.updatedAt >= b.updatedAt ? -1 : 1;
    });
    console.log(items);
    return items;
};

var getItem = function (id) {
    var item;
    $$.ajax({
            url: "/app/InventoryItem/item/" + id,
            async: false,
            method: "GET",
            success: function (data) {
                item = JSON.parse(data);
                var qty = Number.parseInt(item.quantity);
                item.quantity = Number.isNaN(qty) ? 0 : qty;
                item.photoSrc = Rho.Application.expandDatabaseBlobFilePath(item.photoUri);
            },
            error: function (error) {
                console.log("error", error);
            }
        }
    );
    return item;
};

var deleteItemById = function (id) {
    console.log("deleting item", id);
    $$.ajax({
            url: "/app/InventoryItem/delete/" + id,
            async: false,
            method: "GET",
            success: function (data) {
                console.log("item is deleted");
            },
            error: function (error) {
                console.log("error", error);
            }
        }
    );
};