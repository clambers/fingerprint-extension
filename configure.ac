AC_PREREQ([2.69])

AC_INIT([fingerprint], [0.0.1],
[https://github.com/PDXostc/fingerprint-extension/issues], [],
[https://github.com/PDXostc/fingerprint-extension])
AC_CONFIG_SRCDIR([fingerprint/extension.cc])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([1.14 foreign tar-ustar -Wall -Werror -Wno-portability])
AM_SILENT_RULES([yes])

LT_INIT

AC_PROG_CXX
PKG_CHECK_MODULES([dlog], [dlog])
PKG_CHECK_MODULES([jansson], [jansson])
PKG_CHECK_MODULES([libfprint], [libfprint])

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES(
[Makefile
common/Makefile
fingerprint.pc
fingerprint/Makefile
tests/Makefile
tests/package.json
])
AC_REQUIRE_AUX_FILE([tap-driver.sh])

AC_OUTPUT
