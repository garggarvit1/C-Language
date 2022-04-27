#include<stdio.h>
int main()
{
float sum=0,n,i=1,f=1;
printf("enter no. of element");
scanf("%f",&n);
while(i<=n)
{
f=f*i;
sum=sum+i/f;
i++;
}
printf("%f",sum);
return 0;
}
