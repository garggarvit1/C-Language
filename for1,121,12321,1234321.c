  #include<stdio.h>
  int main()
  {
  int i,j,k,d;
  for(i=1;i<=5;i++)
  {
  for(k=1;k<=5-i;k++)
  printf(" ");
  for(j=1;j<=i;j++)
  printf("%d",j);
  for(d=i-1;d>=1;d--)
  printf("%d",d);
  printf("\n");
  }
  return 0;
  }
