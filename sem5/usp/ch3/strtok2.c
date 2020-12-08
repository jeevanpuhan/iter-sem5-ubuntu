#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main()
{
	char str[] ="ITER-IBCS-SOA-SUM-ids";
	char ptr[] ="iter-ibcs-soa-sum-ids-CSE";
	char *token,*ptoken;

	ptoken=strtok(ptr,"-");
	token=strtok(str,"-");
	while (ptoken!=NULL){
	printf("Token=%s\n",ptoken);
	ptoken=strtok(NULL,"-");
	}
	return 0;
}
