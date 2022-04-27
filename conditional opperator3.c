#include<stdio.h>
int main()
{
char a;
printf("enter letter=");
scanf("%c",&a);
(a>=32&&a<=47||a>=58&&a<=64||a>=91&&a<=96||a>=123&&a<=126?printf("special letter"):printf("not special letter"));
return 0;
}

