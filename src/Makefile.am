bin_PROGRAMS = cchess
cchess_SOURCES = main.c \
                 createwindow.h \
                 createwindow.c \
                 callback.h \
                 callback.c \
                 cchess.h \
                 cchess.c \
                 network.h \
                 network.c
cchess_LDADD = $(DEPS_LIBS)
AM_CPPFLAGS = $(DEPS_CFLAGS) \
              -DPIXMAPS_DIR=\""$(datadir)/pixmaps"\" \
              -DPACKAGE_LOCALE_DIR=\""$(datadir)/locale"\"
