# Write this Makefile
myas :lexem.o check.o trans.o main.o
	gcc -o myas main.o lexem.o check.o trans.o -lm
lexem.o: lexem.c
	gcc -c lexem.c
check.o : check.c
	gcc -c check.c
trans.o : trans.c
	gcc -c trans.c
main.o : main.o
	gcc -c main.c
clean:
	rm -rf lexem.o check.o trans.o main.o assembler

