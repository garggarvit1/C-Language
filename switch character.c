#include<stdio.h>
int main()
{
char ch;
printf("enter character=");
scanf("%c",&ch);
switch (ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("character is vowel");
break;
default :
printf("character is not vowel");
}
return 0;
}
