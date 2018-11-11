# Write this Makefile
all : main trans check lexem  mayas

main : main.c
	gcc -c main.c
trans : trans.c
	gcc -c trans.c
check : check.c
	gcc -c check.c
lex : lexem.c
	gcc -c lexem.c
myas :
	gcc -o myas main.o lexem.o  check.o trans.o
