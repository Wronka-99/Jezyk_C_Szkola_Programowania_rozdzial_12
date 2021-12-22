CC=gcc
CFLAGS=-I.
DEPS = PE12_2A.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: PE12_2A.o PE12_2B.o
	$(CC) -o hellomake PE12_2A.o PE12_2B.o