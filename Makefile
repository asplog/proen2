CC=gcc
CXX=g++
CFLAGS=-O2 -pipe
CXXFLAGS=$(CFLAGS)
LDFLAGS=-lm

.SUFFIXES:	.c	.o	.h	.exe

.c.o
	$(CC) -c $(CFLAGS) -o $@ $<
.o.exe
	$(CC) -o $@ $< $(LDFLAGS)
