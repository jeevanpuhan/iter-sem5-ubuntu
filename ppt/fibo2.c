#include <stdio.h>

int main()
{
	int a=0,b=1,sum=0,n;
	scanf("%d",&n);
	printf("%d\n",a);
	while(n>1)
	{
		printf("%d\n",b);
		sum=a+b;
		a=b;
		b=sum;
		n--;
	}
	return 0;
}
