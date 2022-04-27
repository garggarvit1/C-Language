#include<stdio.h>
int main()
{
    int a[10],i,n,x,pos;
    printf("enter no. of elements=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        printf("enter elements=");
    scanf("%d",&a[i]);
        }
printf("\nenter position=");
scanf("%d",&pos);
printf("\nenter value to be inserted=");
scanf("%d",&x);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
        a[pos-1]=x;

    printf("\nresultant array\n");
    for(i=0;i<=n;i++)
        printf("%d\n",a[i]);
    return 0;
}
