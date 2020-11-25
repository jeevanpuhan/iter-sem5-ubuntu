#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *lognamevar, *newvar;
	lognamevar= getenv("LOGNAME");
	printf("The current logname is: %s\n", lognamevar);
	lognamevar = setenv("LOGNAME","Y",1);
	printf("The new logname is: %s\n", lognamevar);
	//printf("new environment variable is: %s\n",newvar);
	return 0;
}
