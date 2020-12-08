#include <stdio.h>
#include <string.h>
#define LINE_DELIMETERS "\n"
#define WORD_DELIMETERS " "

static int wordcount(char *s) {
  int count = 1;
  char *lasts;

  if(strtok_r(s,WORD_DELIMETERS,&lasts) == NULL)
    return 0;
    while(strtok_r(NULL,WORD_DELIMETERS,&lasts) != NULL)
      count++;

      return count;
}

double wordaverage(char *s) {   /* return average size of words in s */
  char *lasts;
  int linecount=1;
  char *nextline;
  int words;

  nextline = strtok_r(s,LINE_DELIMETERS,&lasts);
  if(nextline == NULL)
    return 0.0;
  words = wordcount(nextline);
  while ((nextline = strtok_r(NULL, LINE_DELIMETERS, &lasts)) != NULL) {
    words += wordcount(nextline);
    linecount++;
  }
  return (double)words/linecount;
}

int main() {
  char str[] = "hey mera naam hai gian,\n mera awaaz hai sabse sundar \n mujhe vote do";
  int count = wordcount(str);
  double avg = wordaverage(str);
  printf("Count = %d\n",count);
  printf("Word average = %.2lf\n",avg);

  return 0;
}
