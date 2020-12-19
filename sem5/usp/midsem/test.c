#include <stdio.h>
#include <unistd.h>

void main() 
{int i; fprintf(stdout,"a"); 
	scanf("%d",&i); fprintf(stdout,"b"); 
	scanf("%d",&i); fprintf(stderr,"c"); fprintf(stdout,"\n"); }
