#include <stdio.h>

int main()
{int i; 
	fprintf(stdout,"a"); 
	scanf("%d",&i);
       	fprintf(stderr,"b"); fprintf(stderr,"c"); fprintf(stdout,"\n");}
