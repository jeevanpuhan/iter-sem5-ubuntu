#include<stdio.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	pid = fork();
	if(pid<0)
	{
		printf("error\n");
	}
	else if (pid==0)
	{
		printf("child process id is %d\n",getpid());
	}
	else
	{
		printf("parent process id is %d\n",getpid());
	}
}
