/**
 * @class Poller
 * Small class to check a remote server at regular interval, supports deferred.
 *
 * 	var poller = new Poller();
 * 	poller
 * 		.intervals([1000,5000,10000])
 * 		.checkback(function() {
 * 			// could be anything asynchronous
 *			var deferred = $.Deferred();
 * 			$.getJSON('/is/server/ready') // could return this directly
 * 				.done(function(response) {
 * 					deferred.resolve();
 * 					})
 * 				.fail(function() {
 * 					deferred.reject();
 * 					})
 * 			return deferred.promise();
 * 			})
 * 		.callback(function() {
 * 			// checkback succeded and the end of one interval
 * 			// stops the poller and callback
 * 			console.log('Ok')
 * 			})
 * 		.failback(function() {
 * 			// after the third attempt, exits calling the failback
 * 			// function
 * 			console.log('Failed');
 * 			});
 * 		poller.start() // start the process
 * 			.done(function() {
 * 				console.log('Polling ok');
 * 				})
 * 			.fail(function() {
 * 				console.log('Polling failed');
 * 				});
 */
var Poller = function() {

    var _timerID = null;
    var _callback = null;
    var _failback = null;
    var _checkback = null;
    var _intervals = [1*1000,3*1000,5*1000];
    var idx = 0;
    var _deferred = null;

    var _ignite = function() {

        if (idx < 0) return false; // means stop
        if (idx < _intervals.length) {
            _timerID = setTimeout($.proxy(checker,this),_intervals[idx]);
        }
        else {
            // rejected promise
            _deferred.reject();
            // call failback
            if ($.isFunction(_failback)) {
                _failback.call(this);
            }
        }
    };

    var checker = function() {

        var poller = this;
        var deferred = $.Deferred();
        var _oldPlainCallback = function(result) {
            // if asynch check fail, then trigger again the timeout
            if (result == false || !result) {
                poller.next();
            }
            else {
                // resolve deferred
                _deferred.resolve();
                // success callback
                if ($.isFunction(_callback)) {
                    _callback.call(poller);
                }
            }
        };


        var result = _checkback.call(this,_oldPlainCallback)

        if ($.isFunction(result.promise)) {
            result
                .done(function() {
                    // resolve deferred
                    _deferred.resolve();
                    // success callback
                    if ($.isFunction(_callback)) {
                        _callback.call(poller);
                    }
                })
                .fail(function() {
                    poller.next();
                });
        }

    };

    function _clearTimer() {

        if (_timerID != null) {
            clearInterval(_timerID);
            _timerID = null;
        }
    }


    return {

        /**
         * @method intervals
         * Sets the intevals to check the remote server
         * @param {Array} intervals Array of milliseconds to check the server
         * @chainable
         */
        intervals: function(intervals) {
            _intervals = intervals;
            return this;
        },

        /**
         * @method start
         * Starts the poller
         * @deferred
         */
        start: function() {

            _deferred = $.Deferred();
            //if (_timerID == null) {
            idx = 0;
            _ignite.call(this);
            //	}
            return _deferred.promise();
        },

        /**
         * @method restart
         * Restart the poller
         * @chainable
         */
        restart: function() {
            _clearTimer();
            this.start();
            return this;
        },

        /**
         * @method next
         * Skip to the next interval immediately without waiting
         * @chainable
         */
        next: function() {

            ++idx;
            _ignite.call(this);

            return this;
        },

        /**
         * @method callback
         * Set a callback in case polling succeed, Poller#start returns a deferred, it's possibile to use the .done() instead
         * @param {Function} callback
         * @chainable
         */
        callback: function(callback) {
            _callback = callback;
            return this;
        },

        /**
         * @method failback
         * Set a failback in case polling fails, Poller#start returns a deferred, it's possibile to use the .fail() instead
         * @param {Function} failback
         * @chainable
         */
        failback: function(failback) {
            _failback = failback;
            return this;
        },

        /**
         * @method checkback
         * Asynchronous method to check against the remote server whether the polling is succesfull.
         * The checkback function receive a callback function as parameter, call it with a true|false parameter to change the status
         * of the poll.
         * Alternatively the checkback can return a deferred/promise, resolving or rejecting it change the status of the poller
         * With callback
         * 	.checkback(function(callback) {
         * 		// could be anything asynchronous
         * 		callback(true);
         * 		});
         * With deferred
         * 	.checkback(function() {
         * 		// could be anything asynchronous
         * 		var deferred = $.Deferred();
         * 		deferred.resolve();
         * 		return deferred.promise();
         * 		});
         * @param {Function} checkback
         * @chainable
         */
        checkback: function(checkback) {
            _checkback = checkback;
            return this;
        },

        /**
         * @method stop
         * Stops the poller but keep the status
         * @chainable
         */
        stop: function() {
            _clearTimer();
            return this;
        }

    };

};
