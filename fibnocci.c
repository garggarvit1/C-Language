#include<stdio.h>
int main()
{
int a=0,b=1,c,n,i=1;
printf("enter n=");
scanf("%d",&n);
printf("%d\n%d\n",a,b);
while(i<=n-2)
{
c=a+b;
printf("%d\n",c);
a=b;
b=c;
i++;
}
return 0;
}
