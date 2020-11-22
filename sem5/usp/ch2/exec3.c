#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void)
{
	int err;
	pid_t pid = fork();
	if(pid == 0)
	{
	printf("I am child\n");
	err=execle("/bin/wc","wc","pro1.c",NULL,NULL);
	if(err==-1)
	{
		perror("Execle Failed\n");
	}
	}
	else
	{
		wait(NULL);
		printf("I am parent\n");
	}
	return 0;
}
