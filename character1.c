#include<stdio.h>
int main()
{
char a;
printf("enter letter=");
scanf("%c",&a);
if(a==90||a==122)
a=a-25;
else
if(a>=65&&a<90)
a=a+1;
else
if(a>=97&&a<122)
a=a+1;
printf("%c",a);
return 0;
}
