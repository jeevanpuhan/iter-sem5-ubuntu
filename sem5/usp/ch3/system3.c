#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[]="tree dir1";
	int i = system(s);
	printf("%d\n",i);

	return 0;
}
