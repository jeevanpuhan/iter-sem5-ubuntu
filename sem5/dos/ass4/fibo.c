#include <stdio.h>

int main()
{
	int a=0,b=1,sum=0,n;
	scanf("%d",&n);
	char arr[1000];
	arr[0]=a;
	int i=1;
	while(n>1)
	{
		arr[i]=b;
		sum=a+b;
		a=b;
		b=sum;
		n--;
		i++;
	}

	int j;
	for(j=0;j<n;j++)
	{
		printf("%d ",arr[j]);
	}
	printf("\n");
	return 0;
}
