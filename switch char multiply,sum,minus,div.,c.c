# include<stdio.h>
int main()
{
int a,b,c;
char ch1,ch2;
do
{
printf("****menu****\n");
printf("+ add\n");
printf("- minus\n");
printf("* multiply\n");
printf("/ divide\n");

printf("enter choice=");
fflush(stdin);
scanf("%c",&ch1);
printf("enter value of a,b");
fflush(stdin);
scanf("%d%d",&a,&b);
switch(ch1)
{
case '+':
c=a+b;
printf("sum=%d\n",c);
break;
case '*':
c=a*b;
printf("multi=%d\n",c);
break;
case '-':
c=a-b;
printf("minus=%d\n",c);
break;
case '/':
c=a/b;
printf("div=%d\n",c);
}
printf("enter more rotation<y/n>=");
fflush(stdin);
scanf("%c",&ch2);
}
while(ch2=='y');
return 0;
}
