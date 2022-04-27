#include<stdio.h>
int main()
{
int a[10][10],b[10][10],n,m,i,j;
printf("enter row & column of matrix=");
scanf("%d%d",&n,&m);
printf("enter first matrix=");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
b[i][j]=a[j][i];// not use in a[j][i]
printf("%d\t",b[i][j]); //use a[j][i]
}
printf("\n");
}
return 0;
}
