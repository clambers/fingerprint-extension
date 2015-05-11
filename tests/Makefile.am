AM_TESTS_ENVIRONMENT = \
  apipath=$(top_srcdir)/fingerprint/fingerprint.js;
TEST_LOG_DRIVER = env AM_TAP_AWK='$(AWK)' $(SHELL) \
                  $(top_srcdir)/build-aux/tap-driver.sh
TESTS = $(srcdir)/node_modules/.bin/mocha
MODULES = node_modules
EXTRA_DIST = $(MODULES)

$(MODULES): package.json.in
	npm install
