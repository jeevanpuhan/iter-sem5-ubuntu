#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
	int i,p;
	p=sqrt(n);
	for(i=2;i<=p;i++)
		if(n%i==0)
			return 0;
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
