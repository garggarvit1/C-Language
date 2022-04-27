#include <stdio.h>
int main()
{
  int a,r=0,rem,x;
  printf("enter no=");
  scanf("%d",&a);
  x=a;
  while(a!=0)
  {
   rem=a%10;
   r=r*10+rem;
   a=a/10;
  }
  if(x==r)
    printf("palindrome no.");
  else
    printf("not palindrome no.");
    return 0;
}
