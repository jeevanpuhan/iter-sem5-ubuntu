#include<stdio.h> 
#include<stdlib.h>
#include<unistd.h> 

int main() 
{ 
	pid_t child; 
	int a=20, b=10; 
	child = fork(); 
	a = a + b; 
			printf("child = %ld\n",(long)child);
			printf("pid = %ld\n",(long)getpid());
	if(child <= 0)
		{ 
			a=b;
			printf("child = %ld\n",(long)child);
			printf("pid if = %ld\n",(long)getpid());
		} 
	printf("%d\n",a); 
}
