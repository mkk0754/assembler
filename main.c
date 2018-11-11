#include "myas.h"

int main(int argc, char* argv[])
{
	char ifname[20]={NULL,};
	char ofname[20]={NULL,};
	char op[4]={NULL,};
	char args[256]={NULL,}; 
	char *mcode;  

	if(argc < 3){
		printf("Usage: myas input_file output_file\n");
		return 0;
	}

	strcpy(ifname, argv[1]);
	strcpy(ofname, argv[2]);

	FILE *ifp = fopen(ifname, "r");
	FILE *ofp = fopen(ofname, "w");

	mcode = (char*) malloc (sizeof(char)*20);
	while (!feof(ifp)){
		fscanf(ifp, "%s %s\n", op, args);

		// translate assembly into machine-code 
		if(!instr_trans(op, args, mcode)){
			printf("Error: %s %s cannot be translated\n", op, args);
			//fprintf(ofp, "%s\n" ,mcode);
			continue;
		}
		printf("%s\n",mcode);
		strcpy(mcode, "hello");
		fprintf(ofp, "%s\n", mcode);
	}

	free(mcode);
	fclose(ifp);
	fclose(ofp);

	return 1;
}
