filterdir=$(libdir)/cups/filter

filter_PROGRAMS= cmdtocanonij2

cmdtocanonij2_SOURCES= \
	cmdtocanonij.c cnijutil.c

cmdtocanonij2_LDADD= ../../com/libs_bin64/libcnbpcnclapicom2.so.5.0.0
AM_CFLAGS= -O2 -Wall -ldl
