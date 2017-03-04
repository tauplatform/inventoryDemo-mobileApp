var addNotification = function (aString) {
    var element = $("<p></p>");
    var item = JSON.parse(aString);
    var text = new Date().getHours() + ":" + new Date().getMinutes() + ":" + new Date().getSeconds() + " ";
    switch (item.status) {
        case("in_progress"):
            element.addClass("text-info");
            text = text + "Sync " + item.source_name + " in progress";
            break;
        case("ok"):
            element.addClass("alert-success");
            text = text + "Sync completed for " + item.source_name;
            $("#ok-button").removeClass("hidden");
            break;
        case("error"):
            switch (item.error_code) {
                case("1"):
                    text = text + "Network error";
                    break;
                case("2"):
                    text = text + "Remote server error";
                    break;
                case("3"):
                    text = text + "Runtime error";
                    break;
                case("4"):
                    text = text + "Unexpected server response";
                    break;
                case("5"):
                    text = text + "ERR_DIFFDOMAINSINSYNCSRC";
                    break;
                case("6"):
                    text = text + "No server response";
                    break;
                case("7"):
                    text = text + "Client is not logged in. Please re-login !";
                    break;
                case("8"):
                    text = text + "Custom sync server error";
                    break;
                case("9"):
                    text = text + "Unauthorized error";
                    break;
                default:
                    text = text + "Unknown error";
            }
            element.addClass("text-danger");
            text = text + " : " +item.error_message;
            $("#ok-button").removeClass("hidden");
            break;
        case("complete"):
            element.addClass("text-success");
            text = text + "Sync completed";
            $("#ok-button").removeClass("hidden");
            break;
        default:
            element.addClass("text-warning");
            text = text + aString;
    }
    $("#notifications").append(element);
    element.text(text);
};


