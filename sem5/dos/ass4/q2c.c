#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	if(fork()==0)
	{
		printf("1\n");
	}
	else
	{
		wait(NULL);
		printf("2\n");
		printf("3\n");
	}

}
