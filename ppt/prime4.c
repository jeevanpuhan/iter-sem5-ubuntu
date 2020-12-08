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
	int n,i;
	scanf("%d",&n);
	for(i=2;i<=n;i++)

		if(isPrime(i))
			printf("%d\n",i);
	return 0;
}

