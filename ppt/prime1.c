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
	int n;
	scanf("%d",&n);
	if(isPrime(n))
		printf("Prime\n");
	else
		printf("Not Prime\n");

	return 0;
}
