#include<stdio.h>

int main()
{
	FILE *myfp;
	int fd;
	myfp=fopen("Trial.txt","w");

	if(myfp==NULL)
	{
		perror("Opening Error");
		return 1;
	}

	/* To get the file descriptor vale */
	fd=fileno(myfp);

	/* fileno() is a library function */
	printf("File descriptor=%d\n",fd);

	return 0;
}
