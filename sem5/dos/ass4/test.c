#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
  fork();
  fork();
  fork();
  if (wait(0) == -1)
    printf("leaf child\n");
  }
