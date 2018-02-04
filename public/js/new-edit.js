$(document).ready(function () {
    // Barcode scanner routines

    var barcodeCallback = function (newCode) {
        var code = $("#inventoryItem\\[upc\\]").val();
        var qty = parseInt($("#inventoryItem\\[quantity\\]").val());

        if (isNaN(qty)) {
            qty = 0;
        }

        if (code !== newCode) {
            $("#inventoryItem\\[upc\\]").val(newCode);
            qty = 0;
        }
        qty++;
        $("#inventoryItem\\[quantity\\]").val(qty);
    };

    var barcodeHardwareScannerCallback = function (params) {
        if (params.data != null) {
            barcodeCallback(params.data);
        }
    };

    var barcodeCameraScannerCallback = function (params) {
        if (params.status === "ok") {
            barcodeCallback(params.barcode);
        }
    };

    var disableDefaultBarcodeScannerIfHardware = function () {
        try {
            var scanner = Rho.Barcode.getDefault();
            if (scanner.scannerType !== "Camera") {
                scanner.disable();
            }
        }
        catch (e) {
            console.error("The routines with Rho.Barcode has raised the error: " + e)
        }
    };

    var setCallbackForDefaultBarcodeScanner = function () {
        try {
            var scanner = Rho.Barcode.getDefault();
            if (scanner.scannerType !== "Camera") {
                disableDefaultBarcodeScannerIfHardware();
                scanner.enable({}, barcodeHardwareScannerCallback)
            } else {
                $("#takeBarcodeBtn").on("click", function () {
                    scanner.take({}, barcodeCameraScannerCallback)
                });
            }
        }
        catch (e) {
            console.error("The routines with Rho.Barcode has raised the error: " + e)
        }
    };

    setCallbackForDefaultBarcodeScanner();

    // Camera routines
    (function () {
        $("#takePhotoBtn").on("click", function () {
            disableDefaultBarcodeScannerIfHardware();
            var photoFilename = Rho.RhoFile.join(Rho.Application.databaseBlobFolder, new Date().getTime().toString());
            var options = {
                fileName: photoFilename,
                desiredWidth: 1024,
                desiredHeight: 1024,
                enableEditing: false
            };
            Rho.Camera.takePicture(options, function (params) {
                if (params.status === "ok") {
                    var imagePath = params.imageUri;
                    if (Rho.System.platform === Rho.System.PLATFORM_WM_CE) {
                        imagePath = params.imageUri.slice(1)
                    }

                    $("#photo").removeClass("hidden");
                    $("#photo").find("img").attr("src", imagePath);
                    $("#photo").find("input").attr("value", imagePath);
                    $("#takePhotoBtn").addClass("hidden");
                    $("#choosePhotoBtn").addClass("hidden");
                }
                setCallbackForDefaultBarcodeScanner();
            })
        });
        $("#choosePhotoBtn").on("click", function () {
            var photoFilename = Rho.RhoFile.join(Rho.Application.databaseBlobFolder, new Date().getTime().toString());
            var options = {
                fileName: photoFilename,
                desiredWidth: 1024,
                desiredHeight: 1024,
                enableEditing: false
            };
            Rho.Camera.choosePicture(options, function (params) {
                if (params.status === "ok") {
                    var imagePath = params.imageUri;
                    if (Rho.System.platform === Rho.System.PLATFORM_WM_CE) {
                        imagePath = params.imageUri.slice(1)
                    }

                    $("#photo").removeClass("hidden");
                    $("#photo").find("img").attr("src", imagePath);
                    $("#photo").find("input").attr("value", imagePath);
                    $("#takePhotoBtn").addClass("hidden");
                    $("#choosePhotoBtn").addClass("hidden");
                }
            })
        });

        $("#deletePhotoBtn").on("click", function () {
            $("#takePhotoBtn").removeClass("hidden");
            $("#choosePhotoBtn").removeClass("hidden");
            $("#photo").addClass("hidden");
            $("#photo").find("img").attr("src", "");
            $("#photo").find("input").attr("value", "");
        });
    })();

    // Signature routines
    (function () {
        $("#takeSignatureBtn").on("click", function () {
            var signatureFilename = Rho.RhoFile.join(Rho.Application.databaseBlobFolder, new Date().getTime().toString());

            Rho.Signature.takeFullScreen({fileName: signatureFilename}, function (params) {
                if (params.status === "ok") {
                    //alert(params.imageUri);

                    var id = "#signature";
                    $(id).removeClass("hidden");

                    var img_path;
                    if (Rho.System.platform === Rho.System.PLATFORM_IOS || Rho.System.platform === Rho.System.PLATFORM_SAILFISH) {
                        img_path = params.imageUri;
                    }
                    else {
                        img_path = params.imageUri.slice(7);
                    }
                    $(id).find("img").attr("src", img_path);
                    $(id).find("input").attr("value", img_path);
                }
            })
        })
    })();

    // User input validation
    (function () {
        var validateUserInput = function (element) {
            toastr.remove();
            if ($(element).find("#inventoryItem\\[upc\\]").val() === "") {
                toastr.error("Field \"UPC\" must be filled", 'Error!');
                return false;
            }
            if ($(element).find("#inventoryItem\\[productName\\]").val() === "") {
                toastr.error("Field \"Product name\" must be filled", 'Error!');
                return false;
            }
            if ($(element).find("#inventoryItem\\[quantity\\]").val() === "") {
                toastr.error("Field \"Quantity\" must be greater then zero", 'Error!');
                return false;
            }
            if ($(element).find("#inventoryItem\\[employeeId\\]").val() === "") {
                toastr.error("Field \"Employee ID\" must be filled", 'Error!');
                return false;
            }
            if ($(element).find("#inventoryItem\\[photoUri\\]").val() === "") {
                toastr.error("A photo of product is required", 'Error!');
                return false;
            }
            if ($(element).find("#inventoryItem\\[signatureUri\\]").val() === "") {
                toastr.error("A signature of the employee if required", 'Error!');
                return false;
            }
            return true;
        };

        $("form").submit(function (e) {
            e.preventDefault();
            var form = this;
            if (validateUserInput(form)) {
                form.submit();
            }
        });

        $("#done-button").on("click", function () {
            $("form").submit();
        });
    })();

});
