#include<stdio.h>
int main()
{
long int a,rem,r=0;
printf("enter no=");
scanf("%d",&a);
while(a!=0)
{
rem=a%10;
r=r*10+rem;
a=a/10;
}
printf("rev no.%d",r);
return 0;
}
