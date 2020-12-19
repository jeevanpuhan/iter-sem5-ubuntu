#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdlib.h>

int main()
{
	// shmget(key,size,shmflag)
	
	int shmid;
       	key_t key;
	shmid = shmget(key,30,IPC_CREAT | 0666);
 	if (shmid < 0 )
	{
		printf("Shared memory is not created\n");	
		exit(1);
	}
	printf("value of keyis %d\n",key);
	printf("value of shmid is %d\n",shmid);
	printf("shared memory is created\n");

}
