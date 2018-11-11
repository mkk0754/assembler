#include "myas.h"

int lex(char *lexem){
	switch(lexem[0]){
	case '%':return reg;break;
	case '(':
	case '-':
	case '0':return mem;break;
	case '$':return immediate;break;
	}
}
