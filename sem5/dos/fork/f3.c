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
		execlp("./f2.out","f2.out",NULL);
		printf("back to f3.c program\n");
	}
	else
	{
		printf("parent process id is %d\n",getpid());
	}
}
