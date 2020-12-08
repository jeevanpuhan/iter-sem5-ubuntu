#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
	pid_t pid;
	pid=fork();

	if(pid<0)
	{
		printf("Process is not created\n");
	}
	else if(pid == 0)
	{
    		int i = system("cp file1 file2");
		if(i==0)
			printf("file copied\n");
		printf("child process ID : %d\n",getpid());
		printf("Id of parent process : %d\n",getppid());
	}
	else
	{
		wait(NULL);
		printf("Parent process\n");
		printf("Parent process : %d\n",getpid());
	}

	return 0;
}
