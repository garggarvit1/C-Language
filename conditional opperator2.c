#include<stdio.h>
int main()
{
char a;
printf("enter letter=");
scanf("%c",&a);
(a>=97&&a<=122?printf("small letter"):printf("not small letter"));
return 0;
}
