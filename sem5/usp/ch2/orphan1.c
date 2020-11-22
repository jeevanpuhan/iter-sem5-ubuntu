#include <stdio.h>
#include <unistd.h>

int main()
{
	int pid= fork();
	if (pid> 0)
	printf("in parent process, process id = %ld\n",(long)getpid());
	// Note that pidis 0 in child process
	// and negative if fork() fails
	else if (pid== 0) {
	printf("child process id = %ld\n",(long)getpid());
	sleep(20);
	printf("in child process & my parent process id = %ld\n",(long)getppid());
	}
	return 0;
}
