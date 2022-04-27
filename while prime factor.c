#include<stdio.h>
int main()
{
int n,c=2;
printf("enter no=");
scanf("%d",&n);
while(n!=1)
{
if(n%c==0)
{
printf("\n%d",c);
n=n/c;
continue;
}
c++;
}
return 0;
}
