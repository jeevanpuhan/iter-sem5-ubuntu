#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[] = "TOC;;PLC,USP";
	char* token;
	char* ptr;
	token = strtok_r(str,";,",&ptr);
	while (token!=NULL) {
		printf("Token=%s\n",token);
		token=strtok_r(NULL,";,",&ptr);
	}
	printf("Token=%s\n",token);
	return 0;
}
