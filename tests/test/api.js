var should;
var fingerprint;

describe(process.env.npm_package_name, function() {
  beforeEach(function() {
    require('../crosswalk').stub();
    fingerprint = require(process.env.apipath);
    should = require('chai').should();
  });

  describe('scanFinger()', function() {
    it('should not throw with valid arguments', function(done) {
      fingerprint.scanFinger('Dutch', 'M', 'Thumb', function(err) {
        should.not.exist(err);
        done();
      });
    });
  });
});
