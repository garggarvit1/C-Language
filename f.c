  #include<stdio.h>
  int main()
  {
  char i,j,d;
  int k;
  for(i=65;i<=69;i++)
  {
  for(k=1;k<=70-i;k++)
  printf(" ");
  for(j=65;j<=69;j++)
  printf("%c",j);
  for(d=65;d>=69;d--)
  printf("%c",d);
  printf("\n");
  }
  return 0;
  }
