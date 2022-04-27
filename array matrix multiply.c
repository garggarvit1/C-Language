#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,k,n,m,p,q;
printf("enter row and column= ");
scanf("%d%d%d%d",&n,&m,&p,&q);
printf("enter first matrix=");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter second element=");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
}
if(n==q)
{
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
c[i][j]=0;
for(k=0;k<q;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
return 0;
}
