CC=cc
CFLAGS=-O3 -Wall

all:
	$(CC) ${CFLAGS} colorbase.c -o colorbase

clean:
	rm colorbase
