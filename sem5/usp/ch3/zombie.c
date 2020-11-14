#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t childpid;
	int status;
	childpid=fork();
	if(childpid==-1){
		printf("fork error\n");
		return 1;
	}
	else if (childpid==0){
		printf(" Iam child my process ID=%ld\n",(long) getpid());
		exit(status);
	}
	else
		printf("I am parent My PID=%ld\n",(long)getpid());
	printf("status=%d\n",status);
	sleep(50);
	wait(NULL);
	
	return 0;
}
