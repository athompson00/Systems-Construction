all: main.o create.o
	gcc -o program main.o create.o

functionTesting.o: main.c headers.h
	gcc -c main.c

functions.o: create.c headers.h
	gcc -c create.c
