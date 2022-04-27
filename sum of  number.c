#include<stdio.h>
int main()
{
  int n,rem,sum=0;
  char ch=0;
  printf("enter n=");
  scanf("%d",&n);
 // while(n!=0)
//{
  //rem=n%10;
  //sum=sum+rem;
  //n=n/10;
//}
if ((ch>=97&&ch<=127)||(ch>=65&&ch<=90)){
printf("error");}
else
{
         while(n!=0)
{
  rem=n%10;
  sum=sum+rem;
  n=n/10;
}
printf("sum=%d",sum);}
return 0;
}
