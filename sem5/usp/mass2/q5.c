#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[] = "TOC PLC USP";
	char* token;
	token = strtok(str," ");
	while (token!=NULL) {
		printf("Token=%s\n",token);
		token=strtok(NULL," ");
	}
	return 0;
}
