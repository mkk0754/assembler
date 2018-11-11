#include "myas.h"

int lex(char *lexem){
	if(!strncmp(lexem,"$",1)){
		return immediate;
	}
	else if(!strncmp(lexem,"-",1)||!strncmp(lexem,"0",1)||!strncmp(lexem,"(",1)){
		return mem;
	}
	else if(!strncmp(lexem,"%",1)){
		return reg;
	}
	return 0;
	/*
	switch(lexem[0]){
	case '%':return reg;break;
	case '(':
	case '-':
	case '0':return mem;break;
	case '$':return immediate;break;
	default :return 0;
	}*/
}
