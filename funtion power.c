#include<stdio.h>
 int pow(int,int);
int main()
{
int c,a,b;
printf("enter no.=");
scanf("%d",&a);
printf("enter exponential=");
scanf("%d",&b);
c=pow(a,b);
printf("%d",c);
return 0;
}
int pow(int x,int y)
{
 int i,c=1;
 for(i=1;i<=y;i++)
 {

 c=c*x;
 }
 return (c);
}
