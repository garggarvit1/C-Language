#include<stdio.h>
int main()
{
int a[10],n,i,postive=0,negative=0,zero=0;
printf("enter no=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter elements=");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>0)
{
postive++;
}
else
if(a[i]<0)
{
negative++;
}
else
    if(a[i]==0)
{
zero++;
}
}
printf("pos=%d\n neg=%d\n zero=%d\n",postive,negative,zero);
return 0;
}
