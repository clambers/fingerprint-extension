var callbacks = {
  nextId: 0,
  handlers: {},
  key: 'id',

  setup: function(cb) {
    var id = ++this.nextId;
    this.handlers[id] = cb;
    return id;
  },

  dispatch: function(response) {
    var id = response[this.key];
    var handler = this.handlers[id];
    handler(response.result);
  }
};

function postMessage(id, msg) {
  msg.jsonrpc = '2.0';
  if (id !== undefined && id !== null) {
    msg[callbacks.key] = id;
  }
  extension.postMessage(JSON.stringify(msg));
}

extension.setMessageListener(function(msg) {
  var res = JSON.parse(msg);
  callbacks.dispatch(res);
});

/**
 * Scan and save a finger using the currently selected fingerprint
 * device.
 *
 * @param {String} name - Name to save as
 * @param {Function} cb - Callback function
 */
exports.scan = function(name, cb) {
  var id = callbacks.setup(cb);
  var msg = {
    method: 'scan',
    params: { name: name }
  };
  postMessage(id, msg);
};

/**
 * Verify a previously scanned fingerprint using the currently
 * selected fingerprint scanner.
 *
 * @param {Function} cb - Callback function
 *
 * @returns {Boolean} True if verified, false otherwise
 */
exports.verify = function(cb) {
  var id = callbacks.setup(cb);
  var msg = {
    method: 'verify',
    params: {}
  };
  postMessage(id, msg);
};

/**
 * Delete a previously scanned fingerprint.
 *
 * @param {String} name - Name when scanned
 * @param {Function} cb - Callback function
 */
exports.remove = function(name, cb) {
  var id = callbacks.setup(cb);
  var msg = {
    method: 'remove',
    params: { name: name }
  };
  postMessage(id, msg);
};
