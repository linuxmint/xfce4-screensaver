ACLOCAL_AMFLAGS = -I m4 ${ACLOCAL_FLAGS}

NULL =

DISTCHECK_CONFIGURE_FLAGS = \
	--without-elogind  \
	--without-systemd

SUBDIRS = \
	src      \
	savers   \
	po       \
	data     \
	doc      \
	$(NULL)

EXTRA_DIST = \
	autogen.sh           \
	COPYING              \
	COPYING.LIB          \
	COPYING.LGPL         \
	AUTHORS              \
	INSTALL              \
	README.md            \
	ChangeLog            \
	NEWS                 \
	intltool-extract.in  \
	intltool-merge.in    \
	intltool-update.in   \
	$(NULL)

DISTCLEANFILES = \
	intltool-extract            \
	intltool-merge              \
	intltool-update             \
	./po/.intltool-merge-cache  \
	./po/.intltool-merge-cache.lock \
	$(NULL)

MAINTAINERCLEANFILES = \
	*~             \
	intltool-*.in  \
	compile        \
	configure      \
	INSTALL        \
	COPYING        \
	install-sh     \
	missing        \
	mkinstalldirs  \
	config.guess   \
	ltmain.sh      \
	config.sub     \
	depcomp        \
	Makefile.in    \
	config.h.*     \
	aclocal.m4     \
	acinclude.m4   \
	$(NULL)

# Build ChangeLog from GIT  history
ChangeLog:
	$(AM_V_GEN) if test -d $(top_srcdir)/.git; then        \
	    GIT_DIR="$(top_srcdir)/.git" git log --stat > $@;  \
	fi

dist: ChangeLog

.PHONY: ChangeLog

distuninstallcheck_listfiles = 						\
	find . -type f -print | grep -v ./share/icons/hicolor/icon-theme.cache
