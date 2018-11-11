#include "myas.h"

int instr_trans(char *op, char *args, char* mcode)
{
	
	// check syntax 
	if(!is_valid(op, args)){
		printf("Error: %s %s is not valid\n", op, args);
		return 0;
	}


	//strcpy(mcode, "AB CD EF");

	/********************************/
    /*  							*/
	/*    generate machine code     */
    /*  							*/
	/********************************/
	if(strcpy(op,"mov"))
		move(args,mcode);
	else if(strcpy(op,"push")){}
	else if(strcpy(op,"add")){}
	else if(strcpy(op,"pop")){}
	else if(strcpy(op,"sub")){}
	else if(strcpy(op,"call")){}
	
	return 1;	
}
int move(char *args, char *mcode){
	char *left;
	char *right;
	int left_lexem;
	int right_lexem;
	
	left = strtok(args, ",");
	right = strtok(NULL, ",");
	left_lexem = lex(left);
	right_lexem = lex(right);
	if(left_lexem == reg){
		if(left[2] == 'a')
			strcpy(mcode, "b8");
		else
			strcpy(mcode,"8b");
	}else if(left_lexem == mem ){
		if(right[2] =='a')
			strcpy(mcode, "a1");
		else
			strcpy(mcode, "8b");
	}else if(left_lexem == immediate &&right_lexem == reg){
		if(strcmp(right,"%eax"))
			strcpy(mcode, "b8");
		else if(strcmp(right, "%ecx"))
			strcpy(mcode, "b9");
		else if(strcmp(right, "%edx"))
			strcpy(mcode, "bA");
		else if(strcmp(right, "%ebx"))
			strcpy(mcode, "bB");
		else if(strcmp(right, "%esp"))
                        strcpy(mcode, "bC");
		else if(strcmp(right, "%ebp"))
                        strcpy(mcode, "bD");
		else if(strcmp(right, "%esi"))
                        strcpy(mcode, "bE");
		else if(strcmp(right, "%edi"))
                        strcpy(mcode, "bF");
	}
	else
		strcpy(mcode, "error");
	
	return 0;	
}
