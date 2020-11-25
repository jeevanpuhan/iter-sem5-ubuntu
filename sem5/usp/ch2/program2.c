#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	char *x;
	/* set x to the current value of the _EDC_ANSI_OPEN_DEFAULT*/
	x = getenv("_EDC_ANSI_OPEN_DEFAULT");
	printf("program2 DEFAULT = %s\n", (x != NULL) ? x : "undefined");
	/* clear the Environment Variables Table */
	setenv("_EDC_ANSI_OPEN_DEFAULT", NULL, 1);
	/* set x to the current value of the _EDC_ANSI_OPEN_DEFAULT*/
	x = getenv("_EDC_ANSI_OPEN_DEFAULT");
	printf("program2 = %s\n", (x != NULL) ? x : "undefined");
} 
