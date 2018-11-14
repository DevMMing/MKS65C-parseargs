compile:parsearg.o
	gcc parsearg.o
run:
	./a.out
clean:
	rm *.o ./a.out
parsearg.o: parsearg.c
gcc -c parsearg.c
