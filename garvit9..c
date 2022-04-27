#include <stdio.h>
int main()
{
int order,stock;
char credit;
printf("enter value of order ,stock=");
scanf("%d%d",&order,&stock);
printf("enter credit is ok<y/n>=");
fflush(stdin);
scanf("%c",&credit);
if(order<=stock&&credit=='y')
printf("order is supply");
else
if(order<=stock&& credit=='n')
printf("order is not supply");
else
if(order>stock&&credit=='y')
printf("stock is supply after 15 days");
return 0;
}
