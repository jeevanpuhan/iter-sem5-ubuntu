#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char *buff;
	ssize_t bytesread;
	bytesread=read(STDIN_FILENO,buff,10);
	printf("Number of bytes read=%ld\n",bytesread);
}
