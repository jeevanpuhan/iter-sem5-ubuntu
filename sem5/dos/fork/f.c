#include<stdio.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	fork();
	fork();
	fork();
	printf("Hello World!\n");
	return 0;
}
