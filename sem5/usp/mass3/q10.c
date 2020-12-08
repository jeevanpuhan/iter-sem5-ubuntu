#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void forksample() {
  if (fork()==0)
    printf("Hello from Child!\n");
  else
    printf("Hello from Parent!\n");
}

int main(void)
{
  forksample();
  return 0;
}
