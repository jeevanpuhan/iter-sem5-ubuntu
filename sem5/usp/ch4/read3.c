#include <errno.h>
#include <unistd.h>
#include<stdio.h>

int readline(int fd, char *buf, int nbytes) {
int numread = 0;
int returnval;
while (numread < nbytes -1) {
returnval = read(fd, buf + numread, 1);
if ((returnval == -1) && (errno == EINTR))
continue;
if ( (returnval == 0) && (numread == 0) )
return 0;
if (returnval == 0)
break;
if (returnval == -1)
return -1;
numread++;
if (buf[numread-1] == '\n') {
buf[numread] = '\0';
return numread;
}
}
errno = EINVAL;
return -1;
}

int main(void)
{
char buf[10];
ssize_t n;
n = readline(STDIN_FILENO, buf, 10);
printf(" Number of bytes read = %ld\t %s\n",n,buf);
}
