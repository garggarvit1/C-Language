#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],n,m,p,q,i,j;
printf("enter row & column of matrix=");
scanf("%d%d%d%d",&n,&m,&p,&q);
printf("enter first matrix");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter second matrix");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
}
if(n==p&&m==q)
{
printf("result matrix\n ");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf( "%d\t",c[i][j]);
}
printf("\n");
}
}
return 0;
}
