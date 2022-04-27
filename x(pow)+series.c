#include<stdio.h>
int main()
{
float i=1,d,n,a,sum=0;
printf("enter value of a,n=");
scanf("%f%f",&a,&n);
while(i<=n)
{
d=i/pow(a,i);
sum=sum+d;
i++;
}
 printf("sum=%f",sum);
 return 0;
 }
