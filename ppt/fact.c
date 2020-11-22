 #include<stdio.h>
 int main()
 {
   int n, i=1, pro=1;

   printf("Enter a number: ");
   scanf("%d",&n);
   
   start:
   pro *= i;
   i++;
   if(i<=n) goto start;
   printf("Factorial: %d\n",pro);
   return 0;
 }
