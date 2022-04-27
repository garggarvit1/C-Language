# include<stdio.h>
int main()
{
  int x,a,rem,sum=0,r;
  printf("enter no=");
  scanf("%d",&a);
  r=a;
  while(a!=0)
  {
      rem=a%10;
      x=rem*rem*rem;
      sum=sum+x;
      a=a/10;
  }
  if(sum==r)
    printf("armstrong no.");
  else
    printf("not armstrong no.");
  return 0;
}
