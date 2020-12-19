#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BLKSIZE 8
int main(void)
{
	char buf[BLKSIZE];
	read(STDIN_FILENO, buf, BLKSIZE);
	write(STDOUT_FILENO, buf, BLKSIZE);
	return 0;
}
