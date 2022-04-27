#include<stdio.h>
int main()
{
int a,b,c;
printf("enter value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a+b>c&&b+c>a&&a+c>b)
printf("triangle valid");
else
printf("triangle not valid");
return 0;
}
