#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
 {int pid, pid2;
pid=fork();
 if(pid) { pid2=fork(); printf("iter"); }else {printf("iter"); pid2=fork(); }return 0 ;}
