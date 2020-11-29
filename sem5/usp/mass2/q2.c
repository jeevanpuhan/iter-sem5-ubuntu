#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int i=1;
	char* str = argv[1];
	char* token;
	token = strtok(str,"-");
	while (token!=NULL) {
		printf("Token=%s\n",token);
		token=strtok(NULL,"-");
		i++;
	}
	printf("No. of tokens = %d\n",i);
	return 0;
}
