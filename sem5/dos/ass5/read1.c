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
	key = 4545;
//	key = ftok(".",20);

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
	
	// reading from shared memory
	printf("read from shared memory is %s\n",sh);

	// detach the process from shared memory segment
	shmdt(shmid);
	// destroy the shared memory segment
	shmctl(shmid,IPC_RMID,NULL);
}
