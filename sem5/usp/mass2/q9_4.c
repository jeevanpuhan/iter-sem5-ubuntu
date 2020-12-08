#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	char* token1;
       	char* token2;
	char* ptr = argv[1];

	token1 = strtok_r(ptr,":",&ptr);
	int i=1;
	while (token1!=NULL) {
		printf("Token[%d]=%s\n",i,token1);
		token2 = strtok_r(token1,"/",&token1);

		printf("\tSub-token = ");
		while(token2!=NULL)
		{
			printf("%s ",token2);
			token2 = strtok_r(NULL,"/",&token1);
		}
		printf("\n");
		token1 = strtok_r(NULL,":",&ptr);
		i++;
	}
	return 0;
}
