#include<stdio.h>
int main()
{
int i,j,a[30],c,n;
printf("enter no. of elements =");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter elements=");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-1;j++)
{
if(a[j]>a[j+1])
{
c=a[j];
a[j]=a[j+1];
a[j+1]=c;
}
}
}
printf("bubble sort\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
return 0;
}
