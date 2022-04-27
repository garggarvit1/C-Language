#include<stdio.h>
int main()
{
int n,x,i=1,negative=0,positive=0,zero=0;
printf("enter n=");
scanf("%d",&n);
while(i<=n)
{
printf("enter no.=");
scanf("%d",&x);
if(x<0)
{      //if i use this printf neg,pos,zero in int equal to 1
  //  printf("neg=%d\n",negative);
 negative++;}
else
if(x>0)
{
   // printf("pos=%d\n",positive);
positive++;}
else
//printf("zero=%d\n",zero);
 zero++;
 i++;
}
printf("posi=%d\n nega=%d\n zero=%d",positive,negative,zero);
return 0;
}
