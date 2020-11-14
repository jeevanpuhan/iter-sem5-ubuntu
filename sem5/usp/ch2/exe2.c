#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
pid_t childpid, pid;
childpid = fork();
if (childpid == -1) {
perror("Failed to fork");
return 1;
}
if (childpid == 0) { /* child code */
printf("Child's Childpid = %ld child process id = %ld\n",(long)childpid,(long)getpid());
execl("/bin/ls", "ls", "-l", NULL);
//perror("Child failed to exec ls");
return 1;
}
if (childpid == (pid=wait(NULL))) { /* parent code */
printf("Parent's Childpid = %ld, pid = %ld\n",(long)childpid,(long)pid);
//perror("Parent failed to wait due to signal or error\n");
return 1;
}
return 0;
}
