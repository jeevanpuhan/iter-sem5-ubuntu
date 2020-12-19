#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdlib.h>

int main()
{
	// shmget(key,size,shmflag)
	
	int shmid;
       	key_t key;
	char *sh;
//	key = 4567;
	key = ftok(".",20);

	// creating shared memory region
	shmid = shmget(key,30,IPC_CREAT | 0666);
 	if (shmid < 0 )
	{
		printf("Shared memory is not created\n");	
		exit(1);
	}
	
	// attach to shared memory
	sh = shmat(shmid,NULL,0);
	if ( sh < 0)
	{
		printf("Process is not attached\n");
		exit(1);
	}
	// writing something in shared memory
	sprintf(sh,"hello");
	printf("write is successfull\n");
	printf("value of keyis %d\n",key);
	printf("value of shmid is %d\n",shmid);
	printf("shared memory is created\n");
	// reading from shared memory
	printf("read from shared memory is %s\n",sh);
}
