#include<stdio.h>
int main()
{
int a[10],i,j,n,s,t;

printf("enter no. of elements=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter elements=");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
t=a[i];
s=i;
for(j=i+1;j<n;j++)
if(t>a[j])
{
t=a[j];
s=j;
}
t=a[i];
a[i]=a[s];
a[s]=t;
}
printf("selection sort\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
return 0;
}
