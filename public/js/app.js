var app = new Framework7({
    modalTitle: "Inventory Demo",
    pushState: true,
    template7Pages: true,
    precompileTemplates: false,
    template7Data: {
        'url:items.html': function () {
            return {items: getItems()};
        }
    }
});

// Export selectors engine
var $$ = Dom7;

// Add view
var mainView = app.addView('.view-main', {
    // Because we use fixed-through navbar we can enable dynamic navbar
    //dynamicNavbar: true
});

// main entry
mainView.router.loadPage({url: "login.html"});

app.onPageBeforeAnimation("*", function (page) {
    console.log("page " + page.url + " before animation", page);
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
        mainView.router.loadPage({url: 'new-item.html', context: {upc: value.data}});
    };

    var scanners = Rho.Barcode.enumerate();
    var scanner = scanners.find(function (each) {
        return each.friendlyName === "2D Barcode Imager";
    });
    if (scanner != null) {
        scanner.enable({}, scannerCallback);
    }

    $$(".view-item").on("click", function (e) {
        console.log(e);
        var id = $$(e.target).data("item-id");
        var item = getItem(id);
        mainView.router.loadPage({url: 'view-item.html', context: {item: item}});
    });
});

app.onPageBeforeAnimation("new-item", function () {

    Rho.Barcode.disable();

    var cameraCallback = function (value) {
        console.log("camera callback", value);
        if (value.status === "ok") {
            var filename = value.imageUri;
            // $$("#photo").find("img").attr("src", filename);
            $$(".photo-uri").find("input").val(filename);
            $$(".view-picture").css("display", "initial");
            $$(".take-picture").css("display", "none");
        }
    };

    var takingPicture = function () {
        var camera = Rho.Camera.getCameraByType(Rho.Camera.CAMERA_TYPE_BACK);
        var photoFilename = Rho.RhoFile.join(Rho.Application.databaseBlobFolder, new Date().getTime().toString());
        var options = {
            fileName: photoFilename,
            desiredWidth: 480,
            desiredHeight: 800,
            enableEditing: false
        };
        camera.takePicture(options, cameraCallback);
    };

    function captureKeyCallback(result) {
        if (result.keyValue !== 66) {
            return;
        }
        var item = {};
        item.upc = $$("#upc").val();
        item.productName = $$("#product-name").val();
        var qty = Number.parseInt($$("#qty").val());
        qty = Number.isNaN(qty) ? 0 : qty;
        item.quantity = $$("#qty").val();
        item.photoUri = $$("#photo-uri").val();
        saveItem(item);
    }

    // taking photo
    function triggerCallback(result) {
        // 103 - trigger button
        // 104 - PTT button
        if (result.triggerFlag === 103) {
            takingPicture();
        }
        else {
            console.log("capture trigger", result);
        }
    }

    // Saving the item by clicking on the touch button
    // Rho.KeyCapture.captureKey(true, 66, captureKeyCallback);
    //
    // //
    // Rho.KeyCapture.captureTrigger(triggerCallback);


    $$(".take-picture").on("click", function () {
        takingPicture();
    });

    $$(".save-item").on("click", function () {
        var item = {};
        item.upc = $$("#upc").val();
        item.productName = $$("#product-name").val();
        var qty = Number.parseInt($$("#qty").val());
        qty = Number.isNaN(qty) ? 0 : qty;
        item.quantity = $$("#qty").val();
        item.photoUri = $$("#photo-uri").val();
        $$.ajax({
            url: '/app/InventoryItem/create',
            async: false,
            method: "POST",
            data: item,
            success: function (data) {
                mainView.router.loadPage('items.html');
            },
            error: function (error) {
                console.log("error", error);
            }
        });
    });

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

document.addEventListener("backbutton", onBackKeyDown, false);

function onBackKeyDown() {
    console.log("back button is pressed");
    mainView.router.back();
    return true;
}