#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *x;
	/* set environment variable _EDC_ANSI_OPEN_DEFAULT to "Y" */
	setenv("_EDC_ANSI_OPEN_DEFAULT","Y",1);
	/* set x to the current value of the _EDC_ANSI_OPEN_DEFAULT*/
	x = getenv("_EDC_ANSI_OPEN_DEFAULT");
	printf("program1 %s\n",(x != NULL) ? x : "undefined");
	/* call the child program */
	system("program2");
	/* set x to the current value of the _EDC_ANSI_OPEN_DEFAULT*/
	x = getenv("_EDC_ANSI_OPEN_DEFAULT");
	printf("program1= %s\n", (x != NULL) ? x : "undefined");
}
