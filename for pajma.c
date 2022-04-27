#include<stdio.h>
int main()
{
char i,j,k,d;
for(i=71;i>=65;i--)
{
for(j=65;j<=i;j++)
printf("%c",j);
for(k=1;k<=(71-i)*2-1;k++)
printf(" ");
for(d=i;d>=65;d--)
{
if(d==71)
continue;
printf("%c",d);
}
printf("\n");
}
return 0;
}
