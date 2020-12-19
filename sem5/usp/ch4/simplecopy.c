#include <stdio.h>
#include <unistd.h>

#include <errno.h>
#include <unistd.h>
#define BLKSIZE 10

int copyfile(int fromfd, int tofd);
int main (void) 
{
	int numbytes;
	numbytes = copyfile(STDIN_FILENO, STDOUT_FILENO);
	fprintf(stderr, "Number of bytes copied: %d\n", numbytes);
	return 0;
}

int copyfile(int fromfd, int tofd) 
{
	char *bp;
	char buf[BLKSIZE];
	int bytesread, byteswritten;
	int totalbytes= 0;
	for ( ; ; ) {/* handle interruption by signal */
	while (((bytesread= read(fromfd, buf, BLKSIZE)) == -1) && (errno== EINTR)) ;
	if (bytesread<= 0) /* real error or end-of-file on fromfd*/
	break;
	bp= buf;
	while (bytesread> 0) {/* handle interruption by signal */
	while(((byteswritten= write(tofd, bp, bytesread)) == -1 ) && (errno== EINTR)) ;
	if (byteswritten<= 0) /* real error on tofd*/
	break;
	totalbytes+= byteswritten;
	bytesread-= byteswritten;
	bp+= byteswritten;
	}
	if (byteswritten== -1) /* real error on tofd*/
	break;
	}
	return totalbytes;
}
