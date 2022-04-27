#include<stdio.h>
int main()
{
int a,b ,c;
printf("enter value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a==b&&b==c&&c==a)
printf("equilateral triangle");
else
if(a==b||b==c||c==a)
printf("isosceles triangle");
else
if(a*a+b*b==c*c||c*c+b*b==a*a||c*c+a*a==b*b)
printf("right angle triangle");
else
if(a!=b&&b!=c&&c!=a)
printf("scalar triangle");
return 0;}
