#include<stdio.h>
void swap (int*,int*);
int main()
{
int c,d;
printf("enter value of c,d=");
scanf("%d%d",&c,&d);
swap(&c,&d);
printf("c=%d\nd=%d\n",c,d);
return 0;
}
void swap(int *x,int*y)
{
int t;
t=*x;
*x=*y;
*y=t;
}
