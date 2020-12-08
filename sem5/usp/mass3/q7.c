#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  printf("Fork create many confusion");
  fork();
  printf("We suppose to read and Practice\n");
  return 0;
}
