#include<stdio.h>
#include<unistd.h>

int main()
{
	printf("Process id: %ld\n", (long)getpid());
	printf("Parent Process id: %ld\n", (long)getppid());

	return 0;
}
