CC = gcc
CFLAGS = -Wall -std=c99

all: test

test: test.o matrix.o
	$(CC) $(CFLAGS) -o test test.o matrix.o

test.o: test.c matrix.h
	$(CC) $(CFLAGS) -c test.c

matrix.o: matrix.c matrix.h
	$(CC) $(CFLAGS) -c matrix.c

clean:
	rm -f *.o test
