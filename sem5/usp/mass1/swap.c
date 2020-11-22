#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void swap(int *x, int *y)
{
	// Swap logic
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
