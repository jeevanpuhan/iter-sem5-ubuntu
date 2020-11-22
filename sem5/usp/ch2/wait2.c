#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<errno.h>

int main()
{
	pid_t childpid;
	fork();
	printf("PID=%d\n",getpid());
	printf("PPID=%d\n",getppid());
	while( childpid= waitpid(0, NULL, 0))
	if ((childpid== -1) && (errno!=EINTR))
	break;
	printf("Waited for pid%ld\n", (long)childpid);
	return 0;
}
