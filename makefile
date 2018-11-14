compile : parseargs.o
	gcc parseargs.o
run :
	./a.out
clean :
	rm *.o ./a.out
parseargs.o : parseargs.c
	gcc -c parseargs.c
