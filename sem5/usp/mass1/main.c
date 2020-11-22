#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void swap(int *x, int *y);
int main()
{
	int a=10, b=20;
	printf("Before swap a=%d, b=%d\n", a,b);
	swap(&a,&b);
	printf("After swap a=%d, b=%d\n", a,b);

	return 0;
}
/*
void swap(int *x, int *y)
{
	int t = *x;
	*x = *y;
	*y = t;
}
*/
