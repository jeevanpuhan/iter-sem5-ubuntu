#include<stdio.h>

int main(int argc, char* argv[])
{
	int a;
	char* b;
	//printf("Enter a:\n");
	//scanf("%d", &a);
	
	a = atoi(argv[1]);
	b = argv[0];

	printf("%d\n", a);
	printf("%s\n", b);
	printf("%d\n", argc);

	return 0;
}

