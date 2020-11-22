#include<stdio.h> 
#include<stdlib.h>
 #include<unistd.h> 
int main()
 {
 pid_t child; 
child = fork(); 
switch(child) 
{
 case -1 :
 perror("fork");
 exit(1); 
 case 0 : 
 sleep(10);
 printf("%d\n",getppid());
 break; 
 default : 
 break;
 }
 return 0;
 }
