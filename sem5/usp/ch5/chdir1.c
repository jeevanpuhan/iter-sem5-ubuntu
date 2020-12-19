#include<stdio.h>
#include<unistd.h>
int main()
{
char ptr[400];
getcwd(ptr,400);
printf("\n");
printf("Current working directory::%s\n\n",ptr);
chdir("/home/jeevanpuhan/Iter");
getcwd(ptr,400);
printf("Changed to current working directory::%s\n\n",
ptr);
return 0;
}
