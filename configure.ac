# Process this file with autoconf to produce a configure script.

AC_INIT([cchess], [0.02], [h980501427@hotmail.com])
AM_INIT_AUTOMAKE
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CC

# Checks for libraries.
PKG_CHECK_MODULES(DEPS, gtk+-3.0 >= 3.0 glib-2.0 >= 2.2)
AC_SUBST(DEPS_CFLAGS)
AC_SUBST(DEPS_LIBS)

# Checks for header files.
AC_CHECK_HEADERS([arpa/inet.h libintl.h netinet/in.h stdlib.h string.h sys/socket.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_CHECK_FUNCS([inet_ntoa socket])

#AM_GNU_GETTEXT
AM_GNU_GETTEXT([external])
ALL_LINGUAS="zh_CN"

AC_OUTPUT([
    Makefile
    src/Makefile
    pixmaps/Makefile
    po/Makefile.in
])
