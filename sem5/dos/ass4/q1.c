#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;
	int i,j;
	pid=fork();
	if(pid<0)
	{
		printf("Process is not created\n");
	}
	else if(pid == 0)
	{
		printf("Child process\n");
		printf("Id of the child process : %d\n",getpid());
	}
	else
	{
		wait(NULL);	
		printf("Parent process\n");
		printf("Id of the Parent process : %d\n",getpid());
	}

	return 0;
}
