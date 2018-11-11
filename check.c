#include "myas.h"

int is_valid(char *op, char *args)
{
	char *left;
	char *right;
	int left_lexem=0;
	int right_lexem=0;
	left = (char*) malloc (sizeof(char)*20);
	right = (char*) malloc (sizeof(char)*20);
	//printf("if valid, return 1\n");
	//printf("otherwise, return 0\n");

	/********************************/
    /*  							*/
	/*         syntax check         */
    /*  							*/
	/********************************/
	left = strtok(args,",");
	right = strtok(NULL,",");
	left_lexem = lex(left);
	right_lexem = lex(right);

	//free(left);
	//free(right);

	if(left_lexem == mem && right_lexem == mem){
		return 0;
	}
	else if(left_lexem == immediate && right_lexem == immediate){
		return 0;
	}
	else if(right_lexem == immediate){
		return 0;
	}else
		return 1;
}
