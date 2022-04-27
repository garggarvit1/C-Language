#include<stdio.h>
int main()
{
char ch;
printf("enter character value=");
fflush(stdin); //bufferempty
scanf("%c",&ch);
if(ch>=65&&ch<=90)
printf("capital letter");
else
if(ch>=97&&ch<=122)
printf("small letter");
else
if(ch>=48&&ch<=57)
printf("digit");
else
printf("special symbol");
return 0;
}
