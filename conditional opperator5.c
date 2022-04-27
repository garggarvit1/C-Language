// tell greatest no.
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter value of a,b,c=");
scanf("%d%d%d",&a,&b,&c);
(a>b&&a>c?printf("a is the greatest no."):b>a&&b>c?printf("b is the greatest no."):printf("c is the greatest no."));
return 0;
}
