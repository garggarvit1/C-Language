#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,a,c=1,d,r=0;
while(1)
{
printf("**menu**\n");
printf("1 factorial\n");
printf("2 reverse\n");
printf("3 even/odd\n");
printf("4 exist\n");
printf("enter choice=");
fflush(stdin);
scanf("%d",&i);
printf("enter no. a=");
scanf("%d",&a);
switch(i)
{
case 1:
    c=1;
for(d=1;d<=a;d++)
c=c*d;
printf("factorial=%d\n",c);
break;
case 2:
r=0;
while(a!=0)
{
d=a%10;
r=r*10+d;
a=a/10;
 }
 printf("reverse=%d\n",r);
 break;
 case 3:
 if(a%2==0)
 printf("even no.");
 else
 printf("odd no.");
break;
 case 4:
 exit(0);
}

}
return 0;
}
