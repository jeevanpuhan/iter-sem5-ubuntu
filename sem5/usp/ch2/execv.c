#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(int argc, char* argv[])
{	
	int i; char* cmdargs[20];
	if(argc<2)
	{
		printf("Invalid input!");
		return 1;
	}
	for(i=1;argv[i]!=NULL;i++)
	{
	cmdargs[i-1]=argv[i];	
	}
	cmdargs[i-1]=NULL;
	//char *cmdargs[]={argv[1], argv[2], NULL};
	pid_t pid;
	pid=fork();
	if(pid==0){
	execvp("ls", cmdargs);
	}
	else{
	wait(NULL);
	printf("child terminate - I am parent! \n");
	}
	return 0;
}
