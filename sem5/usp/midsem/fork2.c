#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int i = 10;
	i=fork() && fork() && fork() || fork();
	printf("i=%d\n",i);
	sleep(4);
	return 0;
}
