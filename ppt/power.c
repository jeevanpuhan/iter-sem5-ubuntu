#include <stdio.h>

int power(int x, int n)
{
	int p=1;
	while(n>0)
	{
		p=p*x;
		n--;
	}
	return p;
}

int main()
{
	int x,n;
	long long int p;
	double fp;
	scanf("%d%d",&x,&n);

	if(n>=0)
	{
		p=power(x,n);
		printf("%lld",p);
	}
	else
	{
		fp=1.0/power(x,-n);
		printf("%lf",fp);
	}
	return 0;
}
