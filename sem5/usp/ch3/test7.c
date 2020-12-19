#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;
	pid=fork();

	if(pid==0)
	{
		printf("I am child, my pid = %ld\n",(long)getpid());
	}
	else
	{
		wait(NULL);
		printf("I am parent, my pid = %ld\n",(long)getpid());
	}

	return 0;
}

