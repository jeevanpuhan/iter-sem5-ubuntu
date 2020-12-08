#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main() {

  pid_t pid1,pid2,pid3;
  int i,j=0;
  pid1=fork();
  if(pid1 < 0)
  {
    printf("Process is not created\n");
  }
  else if (pid1 == 0) {
    printf("Child 1\n");
    printf("child 1 id %d and parent id is %d\n",getpid(), getppid());
    execlp("./ex1.sh","ex1.sh",NULL);
    printf("back to child 1\n");
  }

  else {
    pid2=fork();
      if(pid2==0)
      {
        sleep(5);
        printf("child 2\n");
        printf("child 2 id %d and parent id is %d\n",getpid(), getppid());
        execlp("./ex2.sh","ex2.sh",NULL);
        printf("back to child 2\n");
      }
      else {

            pid3=fork();
              if(pid3==0)
              {
                sleep(7);
                printf("child 3\n");
                printf("child 3 id %d and parent id is %d\n",getpid(), getppid());
                execlp("./ex3.sh","ex3.sh",NULL);
                printf("back to child 3\n");
              }
              else {
                wait(NULL);
                sleep(10);
                printf("parent id is %d\n", getpid());
              }
      }


  }

}
