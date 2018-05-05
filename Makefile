CC=gcc

all: add_one_app

add_one_app:
	$(CC) add_one.c -o add_one
	$(CC) add_one_2.c -o addone2

clean:
	rm -f add_one addone2
