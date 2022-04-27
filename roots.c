#include<stdio.h>
#include<math.h>
int main()
{
int b,c,a,x;
printf("enter value a,b,c=");
scanf("%d%d%d",&a,&b,&c);
x=(-b+sqrt(pow(b,2)-4ac))/2a;
x=(-b-sqrt(pow(b,2)-4ac))/2a;
printf("x=%d",x);
return 0;
}
