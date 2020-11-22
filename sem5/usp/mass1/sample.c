#include <stdio.h>

void checkEvenOdd(int n);
int main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);

	checkEvenOdd(n);	
	return 0;
}

void checkEvenOdd(int n)
{
	if(n%2==0)
		printf("Even number\n");
	else
		printf("Odd number\n");
}
