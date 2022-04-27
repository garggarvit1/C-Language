#include<stdio.h>
int main()
{
int n=1 ,rate;
printf("enter n=");
scanf("%d",&n);
if( (n>=1)&&(n<=100))
{
rate=n*4;
printf("rate=%d",rate);
}
else
if((n>=101)&&(n<=400))
{
rate=(n-100)*5+400;
printf("rate=%d",rate);
}
 else
if(n>=401)
{
rate=(n-400)*7+1900;
printf("rate=%d",rate);
}
return 0;}
