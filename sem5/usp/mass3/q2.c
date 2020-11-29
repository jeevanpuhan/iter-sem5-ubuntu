#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	int pid,pid2;
	pid=fork();
	if(pid)
	{
		pid2=fork();
		printf("iter");
	}
	else
	{
		printf("iter");
		pid2=fork();
	}

	return 0;
}
