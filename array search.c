#include<stdio.h>
int main()
{
int a[10],n,i,item,loc=0;
printf("enter no of elements=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter elements=");
scanf("%d",&a[i]);
}
printf("enter item to be search=");
scanf("%d",&item);
for(i=0;i<n;i++)
{
if(item==a[i])
{
loc=i+1;
printf("item search at =%d",loc);
}
}
if(loc==0)
printf("item not searched");
return 0;
}
