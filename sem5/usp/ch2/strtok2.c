#include <stdio.h>
#include <unistd.h>
#include <string.h>


int main()
{
	char str[] = "Geeks for Geeks";
	char* token;

	token = strtok(str, " ");
	while (token != NULL)
	{
	printf("%s\n", token);
	token =	strtok(NULL," ");
	}

}
