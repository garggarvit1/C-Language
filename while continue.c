#include<stdio.h>
int main()
{
int i=0;
while(i<=9)
{
i++;
if(i==5)
continue;
printf("%d\n",i);
}
return 0;
}
