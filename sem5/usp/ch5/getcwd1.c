#include<stdio.h>
#include<unistd.h>
#define MAX 255

int main(void)
{
char mycwd[MAX];
if (getcwd(mycwd, MAX) == NULL) {
perror("Failed to get current working directory");
return 1;
}
printf("Current working directory: %s\n", mycwd);
return 0;
}
