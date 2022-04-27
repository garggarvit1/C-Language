#include<stdio.h>
struct date
{
int m;
int d;
int y;
};
struct emp
{
int eno;
char name[20];
struct date doj;
};
int main()
{
struct emp e1;
printf("enter emp no,name,date of joining<m,d,y>=");
scanf("%d%s%d%d%d",&e1.eno,e1.name,&e1.doj.m,&e1.doj.d,&e1.doj.y);
printf("emp no=%d\n name=%s\n",e1.eno,e1.name);
printf("date of joining<%d,%d,%d>",e1.doj.m,e1.doj.d,e1.doj.y);
return 0;
}
