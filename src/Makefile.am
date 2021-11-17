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
AM_CFLAGS = $(DEPS_CFLAGS) \
              -DPIXMAPS_DIR=\""$(datadir)/pixmaps"\" \
              -DPACKAGE_LOCALE_DIR=\""$(datadir)/locale"\" \
              -DGTK_DISABLE_SINGLE_INCLUDES \
              -DGDK_DISABLE_DEPRECATED \
              -DGTK_DISABLE_DEPRECATED \
              -DGSEAL_ENABLE
