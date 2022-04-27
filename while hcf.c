#include<stdio.h>
int main()
{
int a,b,i=1,x;
printf("enter no=");
scanf("%d%d",&a,&b);
while(i<=a||i<=b)
{
if(a%i==0&&b%i==0)
    x=i;
i++;
}
printf("hcf=%d",x);
return 0;
}
