#include<stdio.h>
#include<string.h>
int main()
{
	char *s="--#?This # is a String - ?";
	char *snew;
	size_t len;
	char *accept="-#";
	printf("Original string s=%s\n",s);
	len=strspn(s,accept);
	printf("Length of the initial segment of s which consists entirely of bytes in accept=%ld\n",len);
	snew=s+len; //shifting base addr of s to len
	printf("Now snew=%s\n",snew);
	return 0;
}
