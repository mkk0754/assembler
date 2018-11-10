#include "myas.h"

int instr_trans(char *op, char *args, char* mcode)
{
	// check syntax 
	if(!is_valid(op, args)){
		printf("Error: %s %s is not valid\n", op, args);
		return 0;
	}


	strcpy(mcode, "AB CD EF");

	/********************************/
    /*  							*/
	/*    generate machine code     */
    /*  							*/
	/********************************/
	switch(op){
	case "mov":move(args,mcode);break;
	case "push":break;
	case "add":break;
	case "pop":break;
	case "sub":break;
	case "call":break;
	default:break;
	}
	
	return 1;	
}
int move(char *args, char *mcode){
	char left[255] ={ NULL };
	char *right[255] ={ NULL };
	char *ptr_l[255] ={ NULL };
	char *ptr_r[255] ={ NULL };

	left = strtok(args, ",");
	strcpy(right,args);
	
	strcpy(ptr_l,left);
	strcpy(ptr_r,right);
	if(ptr_l = strchr(ptr_l,'-') || ptr_l = strchr(ptr_l,'(')){
	strcpy(mcode, "8b");
	}
	else if(ptr_l = strchr(ptr_l, '%')){
		if(ptr_r = strchr(ptr_r, '%'))
			strcpy(mcode, "89");
		else
			strcpy(mcode, "a3");
	}
	else if(ptr_l = strchr(ptr_l,'$')){
		
	}
	else{
		strcpy(mcode, "a1");
	}
	strcpy(mcode, "b8");
	
	return 0;	
}
