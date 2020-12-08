#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int ch;
  char prompt[10];
  while(1) {
    printf("1. Display Calendar\n");
    printf("2. Display Date & Time\n");
    printf("3. Display Current Working Directory\n");
    printf("4. Display all running processes\n");
    printf("Enter your choice : \n");
    scanf("%d",&ch);
    switch (ch) {
      case 1:
        system("cal");
        break;
      case 2:
        system("date");
        break;
      case 3:
        system("pwd");
        break;
      case 4:
        system("ps aux");
        break;
      default:
        printf("Invalid Choice\n");
    }
    printf("Try another command(yes/no)?\n");
    scanf("%s",prompt);
    if(!(strcmp(prompt,"no"))) {
        printf("Thank you!\n");
        break;
    }
  }
  return 0;
}
