#include <stdio.h>

void main()
{
	int i;
	fprintf(stdout,"a"); 
	scanf("%d",&i);
       	fprintf(stderr,"b"); 
	scanf("%d",&i);
       	fprintf(stderr,"c");
       	fprintf(stdout,"\n");
}
