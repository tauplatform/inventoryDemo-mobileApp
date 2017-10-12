jQuery.fn.extend({
    blink: function () {
        this.fadeTo(100, 0.5).fadeTo(200, 1.0);
    }
});