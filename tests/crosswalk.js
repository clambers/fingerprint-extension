exports.stub = function() {
  extension = {
    listener: null,

    setMessageListener: function(f) {
      this.listener = f;
    },

    postMessage: function(msg) {
      var json = JSON.parse(msg);
      var res = { id: json.id };
      var cb;

      if (json.cmd === 'scan-finger') {
        res.length = 1;
        res['0'] = null;
      } else if (json.cmd === 'verify-finger') {
        res.length = 2;
        res['0'] = null;
        res['1'] = true;
      } else if (json.cmd === 'delete-finger') {
        res.length = 1;
        res['0'] = null;
      }

      var resMessage = JSON.stringify(res);
      cb = this.listener.bind(null, resMessage);
      setTimeout(cb, 0);
    }
  };

  return extension;
}
