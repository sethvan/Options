# -*- Makefile -*-

options: main.o OperationsDV1.o seth.o
	gcc main.o OperationsDV1.o seth.o -o options

main.o: main.c
	gcc -c main.c

OperationsDV1.o: OperationsDV1.c OperationsDV1.h
	gcc -c OperationsDV1.c

seth.o: seth.c seth.h
	gcc -c seth.c

clean:
	rm -f  *.o options
