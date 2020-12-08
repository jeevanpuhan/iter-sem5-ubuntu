#include <stdio.h>

int GCD(int a,int b)
{
	int tmp;
	while(b>0)
	{
		tmp=b;
		b=a%b;
		a=tmp;
	}
	return a;
}

int main()
{
	int a,b,gcd,lcm;
	scanf("%d%d",&a,&b);

	gcd=GCD(a,b);
	lcm=a*b/gcd;

	printf("GCD = %d, LCM = %d\n",gcd,lcm);
	return 0;
}
