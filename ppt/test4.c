#include <stdio.h>
int main()
{
	int a=2;
	int b=a;
	switch(b)
{
	case a:
printf("case-a\n");
break;
case 3:
printf("case-3\n"); break;
default:
printf("no option");break;


}
printf("exit");
return 0;
}
