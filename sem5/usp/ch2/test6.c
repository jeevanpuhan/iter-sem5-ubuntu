#include<stdio.h> 
#include<stdlib.h>
 #include<unistd.h> 
int main() { if( execl("/bin/ls","ls",NULL) == -1) { perror("execl"); exit(1); } printf("ITER\n"); return 0; }
