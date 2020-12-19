#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "SOA-ITER-IBCS-SUM-IDS-IBCS";
	char ptr[] = "CSE-CSIT-MECH-ECE-EE-EEE";
	char *sptr,*token,*ptoken;
	token=strtok(str,"-");
	ptoken=strtok_r(ptr,"-",&sptr);
	while(ptoken != NULL) {
		printf("Token=%s---%s\n",token,ptoken);
		token=strtok(str,"-");
		ptoken=strtok_r(NULL,"-",&sptr);
	}
	return 0;
}
