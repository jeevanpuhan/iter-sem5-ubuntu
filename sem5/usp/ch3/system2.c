#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[]="ls -l";
	int i = system(s);
	printf("%d\n",i);

	return 0;
}
