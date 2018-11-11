#include "myas.h"

int is_valid(char *op, char *args)
{
	char left[255] = {NULL};
	char right[255] = {NULL};
	int left_lexem;
	int left_lexem;
	//printf("if valid, return 1\n");
	//printf("otherwise, return 0\n");

	/********************************/
    /*  							*/
	/*         syntax check         */
    /*  							*/
	/********************************/
	left = strtok(args,",");
	strcpy(right,args);
	left_lexem = lex(left);
	right_lexem = lex(right);
	if(left == mem && right == mem){
		return 0;
	}
	else if(left == immediate && right == immediate){
		return 0;
	}
	else if(right == immeditate){
		return 0;
	}
	return 1;
}
