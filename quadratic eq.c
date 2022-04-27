#include<stdio.h>
#include<math.h>
int main()
{
float dis,root1,root2,a,b,c;
printf("enter value ofa,b,c=");
scanf("%f%f%f",&a,&b,&c);
dis=b*b-4*a*c;
//condition are real & different
if(dis>0)
{root1=(-b+sqrt(dis))/2*a;
root2=(-b-sqrt(dis))/2*a;
printf("root1=%f\nroot2=%f",root1,root2);}
    else
       if(dis==0)
{root1=root2=(-b/2*a);
printf("root1=%froot2=%f",root1,root2);}
else
{printf("roots are not real");}
return 0;
}
