#include<stdio.h>
int main()
{
int i,n;
for(i=1;i<=10;i++)
{
n= i*pow(-1,i);
printf("\n%d",n);
}
return 0;
}
