#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <sys/types.h> 
void forksample() { 
	if (fork()==0) 
		printf("Hello from Child!\n");
       	else
		printf("Hello from Parent!\n"); } 
		
		int main(void) {forksample(); return 0;}
