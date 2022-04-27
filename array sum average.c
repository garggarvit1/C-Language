#include<stdio.h>
int main()
{
int a[10],n,i,sum=0,avg;
printf("enter no of sub=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter marks");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum =sum +a[i];
}
avg=sum/n;
printf("sum=%d\n avg=%d\n",sum,avg);
return 0;
}
