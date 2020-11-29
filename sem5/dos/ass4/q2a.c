#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	int i=5;
	if(fork()==0)
	{
		printf("Child: %d\n",i);
	}
	else
	{
		printf("Parent: %d\n",i);
	}

}
