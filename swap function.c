#include<stdio.h>
void swap(int,int);
int main()
{
int a,b,c;
printf("enter 1st no.=");
scanf("%d",&a);
printf("enter 2nd no.=");
scanf("%d",&b);
swap(a,b);
printf("a=%d\nb=%d\n",a,b);
return 0;
}
void swap(int x,int y)
{
int c;
c=x;
x=y;
y=c;
printf("%d %d",x,y);
}
