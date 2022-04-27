#include<stdio.h>
struct book
{
int pages;
float cost;
char name[20];
};
int main()
{
struct book b1,b2;
b1.pages=110;
b1.cost=99.20;
strcpy(b1.name,"mohit");
printf("enter pages,cost,name=");
scanf("%d%f%s",&b2.pages,&b2.cost,&b2.name);
printf("pages\t cost\t name\n");
printf("%d\t%f\t%s\n",b1.pages,b1.cost,b1.name);
printf("%d\t%f\t%s\n",b2.pages,b2.cost,b2.name);
return 0;
}
