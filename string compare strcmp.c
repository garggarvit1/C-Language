#include<stdio.h>
int main()
{
char str1[20],str2[20];
int c;
printf("enter first string=");
gets(str1);
printf("enter second string=");
gets(str2);
c=strcmp(str1,str2);//use of strcmp is to compare str1&str2sss
if(c==0)
printf("welcome");
else
printf("try again");
return 0;
}
