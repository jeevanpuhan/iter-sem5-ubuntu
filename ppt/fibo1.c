#include <stdio.h>

int main()
{
	int a=0,b=1,sum=0,n;
	scanf("%d",&n);
	printf("%d\n%d\n",a,b);
	while(sum<=n)
	{
		sum=a+b;
		printf("%d\n",sum);
		a=b;
		b=sum;
	}
}
