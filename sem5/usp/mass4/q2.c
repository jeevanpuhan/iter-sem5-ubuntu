#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	int fd,i;

	for(i=0;i<10;i++)
	{
		fd=open("read.c",O_RDONLY);
		if(fd==-1)
		{
		perror("Open error");
		return 1;
		}
		sleep(2);
		printf("File descriptor Number=%d\n",fd);
		close(fd);
	}

	return 0;
}
