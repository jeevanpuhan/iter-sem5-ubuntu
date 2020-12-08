#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void forksample() {
  if (fork()==0)
    printf("Hello from Child!\n");
  else
  {
    wait(NULL);
    printf("Hello from Parent!\n");
  }
}

int main(void)
{
  forksample();
  return 0;
}
