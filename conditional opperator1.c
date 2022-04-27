#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter value of a,b,c=");
scanf("%d%d%d",&a,&b,&c);
d=(a>b&&a>c?a:(b>c?b:c));
printf("greatest no.%d",d);
return 0;
}
