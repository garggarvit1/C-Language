#include<stdio.h>
int main()
{
 int i,j,k;
 for(i=9;i>=1;i=i-2)
 {
   for(k=1;k<=9-i;k=k+2)
    printf(" ");
   for(j=1;j<=i;j++)
    printf("%d",j);
   printf("\n");
 }
 return 0;
}
