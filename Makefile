CC = gcc
CFLAGS = -Wall

all: connections

connections: main.o my_mat.o
	$(CC) $(CFLAGS) main.o my_mat.o -o $@

main.o: main.c my_mat.h
	$(CC) $(CFLAGS) -c $^

my_mat.o: my_mat.c my_mat.h
	$(CC) $(CFLAGS) -c $^

clean:
	rm -f *.o connections