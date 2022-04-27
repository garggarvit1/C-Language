#include<stdio.h>
int main()
{
 char j,k,i,d;
 for(i=65;i<=69;i++)
 {
  for(k=1;k<=69-i;k++)
  printf(" ");
  for(j=65;j<=i;j++)
  printf("%c",j);
  for(d=i-1;d>=65;d--)
  printf("%c",d);
  printf("\n");
 }
 return 0;

}
