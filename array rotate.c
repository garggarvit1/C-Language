#include<stdio.h>
int main()
{
int a[10],n,i,t;
printf("enter no. of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter elements=");
scanf("%d",&a[i]);
}
t=a[n-1];
for(i=n-1;i>0;i--)
{
a[i]=a[i-1];
}
a[0]=t;
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}
