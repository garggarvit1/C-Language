#include<stdio.h>
int main()
{
int fine ,days;
printf("days=");
scanf("%d",&days);
if(days>=1&&days<=5)
{
fine=days*1;
printf("fine=%d",fine);
}
else
if(days>=6&&days<=10)
{
fine=(days-5)*5+5;
printf("fine=%d",fine);
}
else
if(days>=11&&days<=30)
{
fine=(days-10)*10+30;
printf("fine=%d",fine);
}
else
if(days>=31)
printf("membership cancel");
return 0;
}
