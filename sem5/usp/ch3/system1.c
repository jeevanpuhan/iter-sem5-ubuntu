#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	int i = system("ls -l");
	printf("%d\n",i);

	return 0;
}
