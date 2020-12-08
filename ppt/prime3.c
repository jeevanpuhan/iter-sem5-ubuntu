#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
	int i,p=sqrt(n);
	if(n<=1)
		return 0;
	if(n<=3)
		return 1;
	if(n%2==0||n%3==0)
		return 0;
	for(i=5;i<=p;i+=6)
	{
		if(n%i==0 || n%(i+2)==0)
			return 0;
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d",&n);
	if(isPrime(n))
		printf("Prime\n");
	else
		printf("Not Prime\n");

	return 0;
}
