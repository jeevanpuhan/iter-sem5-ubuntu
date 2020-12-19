// strtok() to count tokens
#include <stdio.h>
#include <string.h>

int main()
{
	char str[]="ITER-IBCS-SHM-SUM-IDS";
	char *delimiters="-";
	int numtokens;
	/* count the number of tokens in str */
	if(strtok(str,delimiters)!=NULL)
		for(numtokens=1;strtok(NULL,delimiters) != NULL;numtokens++);

	printf("Number of tokens=%d\n",numtokens);
	return 0;
}
