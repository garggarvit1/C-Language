#include<stdio.h>
int main()
{
int a,n,i=1, small=327678,greater=0;
printf("enter no of element");
scanf("%d",&n);
{
while(i<=n)
{
printf("enter no");
scanf("%d",&a);
if(small>a)
a=small;
if(greater<a)
a=greater;
i++;
}
printf("small%d\n greater%d\n",small,greater);
}
return 0;
}
