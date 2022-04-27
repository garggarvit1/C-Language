#include<stdio.h>
int main()
{
int n,i=1;
printf("enter n upto 4=");
scanf("%d",&n);
i=n;
while(i>=21)
if(i==1||i==3)
{
printf("computer wins");

}
else
    if(i==2||i==4)
{
    printf("computer wins");
}
return 0;
}
