#include<stdio.h>
fact (int);
int main()
{
    int n,r,ncr;
    printf("enter first no.=");
    scanf("%d",&n);
    printf("enter second no.=");
    scanf("%d",&r);
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("result=%d",ncr);
    return 0;
}
fact (int x )
{int f=1;
while(x>=1)
{
    f=f*x;
    x--;
}
return (f);
}
