#include<stdio.h>
void copy(char*,char*);
int main()
{
char str1[20],str2[20];
printf("enter first name=");
gets(str1);
printf("enter second name=");
gets(str2);
copy(str2,str1);
puts(str2);
return 0;
}
void copy(char*s1,char*s2)
{
while(*s1!='\0')
{
*s2=*s1;
s2++;
s1++;
}
*s2='\0';
}
