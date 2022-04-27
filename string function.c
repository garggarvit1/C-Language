#include<stdio.h>
length(char*);
int main()
{
char str[20];
int L;
printf("enter string=");
gets(str);
L=length(str);
printf("length=%d",L);
return 0;
}
length(char*s)
{
int L=0;
while(*s!='\0')
{
L++;
s++;
}
return (L);
}
