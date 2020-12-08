#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(void)
{
	int fd;
	fd=open("read1.c", O_RDONLY);
	printf("fd=%d\n",fd);
	close(STDIN_FILENO);
	int nfd = dup(fd);
	printf("new fd=%d\n",nfd);

	return 0;	

}
