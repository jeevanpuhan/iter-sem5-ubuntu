#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main()
{
	char str[] ="ITER-IBCS-SOA-SUM-ids";
	char ptr[] ="iter-ibcs-soa-sum-ids-CSE";
	char *token,*ptoken, *p1, *p2;

	token=strtok_r(str,"-", &p1);
	ptoken=strtok_r(ptr,"-",&p2);

	while (ptoken!=NULL){
	printf("PToken=%s\n",ptoken);
	ptoken=strtok_r(NULL,"-", &p2);
	}
	return 0;
}
