#include <stdio.h>

int main(int argc, char* argv[])
{
	int i;
	printf("No of arguments = %d\n", argc);

	for(i=0;argv[i]!=NULL;i++)
		printf("argv[%d] = %s\n",i,argv[i]);

	return 0;
}
