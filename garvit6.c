#include<stdio.h>
int main()
{
int h,t;
float c;
printf("enter value of hardness,tension=");
scanf("%d%d",&h,&t);
printf("enter carbon=");
scanf("%f",&c);
if(h>=50&&c<=0.7&&t>=5600)
printf("grade10");
else
if(h>=50&&c<=0.7||t<=5600)
printf("grade9");
else
if(c<=0.7&&t>=5600||h<=49)
printf("grade8");
return 0;
}
