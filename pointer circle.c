#include<stdio.h>
void circle(int,int*,int*);
int main()
{
int r=1,a,c;
printf("enter radius =");
scanf("%d",&r);
circle(r,&a,&c);
printf("area=%d\n circum=%d\n",a,c);
return 0;
}
void circle(int r1,int *a1,int *c1)
{
*a1 =3.14*r1*r1;
*c1 =2*3.14*r1;
}
