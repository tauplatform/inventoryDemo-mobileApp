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

// main entry
mainView.router.loadPage({url: "login.html"});

app.onPageBeforeAnimation("*", function (page) {
    console.log("page " + page.url + " before animation", page);
    $$(".back").on("click", function () {
        mainView.router.back({url: page.fromPage.url, force: true, ignoreCache: true});
    });
});

app.onPageBack("*", function (page) {
    console.log("page " + page.url + " back", page);
});


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
        var username = value.data;
        app.showPreloader("Logging in as " + username);
        Rho.RhoConnectClient.login(username, "", function (value) {
            app.hidePreloader();
            if (value.error_code === "0") {
                mainView.router.loadPage({url: 'items.html'});
            }
            else {
                $$(".login-failed").find(".message").text("Login as \"" + username + "\" failed");
                $$(".login-failed").css("display", "initial");
                timeoutId = setTimeout(hideLoginFailedMessage, 3000);
            }
        });
    };

    var scanners = Rho.Barcode.enumerate();
    var scanner = scanners.find(function (each) {
        return each.friendlyName === "2D Barcode Imager";
    });
    if (scanner != null) {
        scanner.enable({}, scannerCallback);
    }

});

app.onPageBeforeAnimation("items", function () {
    var scannerCallback = function (value) {
        console.log("items page > scanner callback", value);

        var items = getItems();
        console.log(items);
        var item = items.find(function (each) {
            return each.upc === value.data
        });
        if (item != null) {
            item.photoSrc = Rho.Application.expandDatabaseBlobFilePath(item.photoUri);
            mainView.router.loadPage({url: 'view-item.html', context: {item: item}, ignoreCache: true});
        }
        else {
            mainView.router.loadPage({url: 'new-item.html', context: {upc: value.data}, ignoreCache: true});
        }
    };

    var scanners = Rho.Barcode.enumerate();
    var scanner = scanners.find(function (each) {
        return each.friendlyName === "2D Barcode Imager";
    });
    if (scanner != null) {
        scanner.enable({}, scannerCallback);
    }

    $$(".view-item").on("click", function (e) {
        var id = $$(e.currentTarget).data("item-id");
        var item = getItem(id);
        mainView.router.loadPage({url: 'view-item.html', context: {item: item}, ignoreCache: true});
    });

    $$('.swipeout').on('swipeout:deleted', function (e) {
        var id = $$(this).data("item-id");
        deleteItemById(id);
    });

    $$('.swipeout').on('swipeout', function (e) {
        console.log('Item opened on: ' + e.detail.progress + '%');
    });
});

app.onPageBeforeAnimation("new-item", function (page) {

    var backUrl = page.fromPage.url;
    var quantity = 1;
    var upc = page.context.upc;

    var scannerCallback = function (value) {
        console.log("items page > scanner callback", value);
        if (value.data === upc) {
            quantity = quantity + 1;
            $$("#qty").val(quantity);
        }

    };

    var scanners = Rho.Barcode.enumerate();
    var scanner = scanners.find(function (each) {
        return each.friendlyName === "2D Barcode Imager";
    });
    if (scanner != null) {
        scanner.enable({}, scannerCallback);
    }

    var cameraCallback = function (value) {
        console.log("camera callback", value);
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
        saveItem(filledItem());
    }

    // taking photo
    function triggerCallback(result) {
        // 103 - trigger button
        // 104 - PTT button
        if (result.triggerFlag === 104) {
            takingPicture();
        }
        else {
            console.log("capture trigger", result);
        }
    }

    Rho.KeyCapture.captureKey(true, 66, captureKeyCallback);
    Rho.KeyCapture.captureTrigger(triggerCallback);

    var filledItem = function () {
        return {
            upc: $$("#upc").val(),
            productName: $$("#product-name").val(),
            quantity: quantity,
            photoUri: $$(".photo").find("input").val()
        }
    };

    var saveItem = function(anItem){
        console.log("saved item", anItem);
        $$.ajax({
            url: '/app/InventoryItem/create',
            async: false,
            method: "POST",
            data: anItem,
            success: function (data) {
                mainView.router.back({url: backUrl, force: true, ignoreCache: true});
            },
            error: function (error) {
                console.log("error", error);
            }
        });
    };

    $$(".take-picture").on("click", function () {
        takingPicture();
    });

    $$(".save-item").on("click", function () {
        saveItem(filledItem());
    });

});


app.onPageBack("new-item", function () {
    Rho.KeyCapture.captureTrigger();
    Rho.KeyCapture.captureKey(true, 66);
});

var getItems = function () {
    var items = [];
    $$.ajax({
            url: '/app/InventoryItem/items',
            async: false,
            method: "GET",
            success: function (data) {
                items = JSON.parse(data);
            },
            error: function (error) {
                console.log("error", error);
            }
        }
    );
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
    var item;
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
    return item;
};
