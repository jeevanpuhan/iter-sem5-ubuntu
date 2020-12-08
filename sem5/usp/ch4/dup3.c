#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main()
{
	int fd;
	fd=open("duptest.txt",O_WRONLY|O_CREAT|O_TRUNC,S_IRUSR|S_IWUSR|S_IRGRP);
	printf("File descriptor: fd=%d\n",fd);

	dup(STDOUT_FILENO);	/* save descriptor STDOUT_FILENO */
	close(1); 		/* closing 1, creates an empty slot */
	dup(fd); 		/* duplicate fd to standard output */

	close(fd);

	write(STDOUT_FILENO,"USP\n",4);
	write(STDOUT_FILENO,"DOS\n",4);
	printf("Hello\n");

	return 0;
}
