#include <stdio.h>
#include <unistd.h>
#include <string.h>


int main()
{
	char str[] = "SOA Deemed University";

	// Returns first token
	char* token = strtok(str, " ");
	while (token != NULL)
       	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
}
