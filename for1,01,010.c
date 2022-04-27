#include<stdio.h>
int main()
{
int i,j,c=1;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
if(c%2==0)
printf("0");
else
printf("1");
c++;
}
printf("\n");
}
return 0;
}
