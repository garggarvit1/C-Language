#include<stdio.h>
int main()
{
int n,c=2;
printf("enter no.=");
scanf("%d",&n);
while(c<=n/2)
{
if(n%c==0)
{
printf("not prime no.");
break;
}
c++;
}
if(c>n/2)
printf("prime no");
return 0;
}
