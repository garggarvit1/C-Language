#include<stdio.h>
int main()
{
int i,j,k,d;
for(i=0;i<=4;i++)
{
for(k=1;k<=4-i;k++)
printf(" ");
for(d=i;d>=1;d--)
    printf("%d",d);
    for(j=0;j<=i;j++)
printf("%d",j);

printf("\n");
}
return 0;
}
