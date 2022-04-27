#include<stdio.h>
void rect (int,int,int*,int*);
int main()
{
int l,b,a,p;
printf("enter length,breadth of rectangle=");
scanf("%d%d",&l,&b);
rect(l,b,&a,&p);
printf("area=%d\n perimeter=%d\n",a,p);
return 0;
}
void rect(int l1,int b1,int *a1,int *p1 )
{
*a1=l1*b1;
*p1=2*(l1+b1);
}
