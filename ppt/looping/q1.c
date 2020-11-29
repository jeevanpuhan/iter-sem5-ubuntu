#include <stdio.h>

int main()
{
	int n,i;
	printf("Enter value of n:\n");
	scanf("%d",&n);
	
	if(n>=1)
	{
		for(i=1;i<=n;i++)
		{
			printf("%d\n",i);
		}
	}
	else
	{
		for(i=1;i>=n;i--)
		{
			printf("%d\n",i);
		}
	}

	return 0;
}
