
.PHONY: default
default: tstidl

IDL_CFLAGS=$(shell pkg-config --cflags libIDL-2.0)
IDL_LDFLAGS=$(shell pkg-config --libs libIDL-2.0)

tstidl: tstidl.c
	gcc $(IDL_CFLAGS) $(IDL_LDFLAGS) tstidl.c -o tstidl