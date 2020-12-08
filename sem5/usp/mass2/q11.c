#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;

int main(int argc, char *argv[])
{
  int count = 0;
  printf("============================== \n");
  printf("Current Environment List: \n");
  printf("============================== \n\n");
  while(environ[count] != NULL)
  {
    printf("%d. %s\n\n",count+1,environ[count]);
    count++;
  }
  return 0;
}
