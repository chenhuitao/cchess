# Process this file with autoconf to produce a configure script.

AC_INIT(cchess, 0.1, h980501427@hotmail.com)
AM_INIT_AUTOMAKE(cchess, 0.01)
AM_CONFIG_HEADER([config.h])
AM_MAINTAINER_MODE

AC_PROG_CC
AM_PROG_CC_STDC
AC_PROG_INSTALL
AC_STDC_HEADERS
AC_PROG_AWK
AC_PROG_CPP
AC_C_CONST

PKG_CHECK_MODULES(DEPS, gtk+-2.0 >= 2.2 glib-2.0 >= 2.2)
AC_SUBST(DEPS_CFLAGS)
AC_SUBST(DEPS_LIBS)

AC_CHECK_HEADERS([arpa/inet.h libintl.h netinet/in.h stdlib.h string.h sys/socket.h unistd.h])
AC_CHECK_FUNCS([inet_ntoa socket])

ALL_LINGUAS="zh_CN"
AM_GLIB_GNU_GETTEXT

AC_OUTPUT([
Makefile
src/Makefile
pixmaps/Makefile
po/Makefile.in
])

