#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *lognamevar;
	lognamevar= getenv("LOGNAME");
	printf("The current logname is: %s\n", lognamevar);
	return 0;
}
