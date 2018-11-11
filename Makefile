# Write this Makefile
myas :lexem.o check.o trans.o main.o
	gcc -o myas lexem.o check.o trans.o main.o -lm
lexem.o: lexem.c
	gcc -O -Wall -c lexem.c
check.o : check.c
	gcc -O -Wall -c check.c
trans.o : trans.c
	gcc -O -Wall -c trans.c
main.o : main.c
	gcc -O -Wall -c main.c
clean:
	rm -f lexem.o check.o trans.o main.o myas

