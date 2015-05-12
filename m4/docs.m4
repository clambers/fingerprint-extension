# AX_DOCUMENTATION
# ----------------
# Adds options to configure and sets up the project for generating
# docs.
AC_DEFUN([AX_DOCUMENTATION],
[AC_ARG_ENABLE([docs],
AS_HELP_STRING([--disable-docs], [Disable documentation generation])
)
AM_CONDITIONAL([DOCS], [test x$enable_docs = xyes])
])
