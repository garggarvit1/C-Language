#include <stdio.h>
int main()
{
char s1[20],s2[20];
printf("enter first name=");
gets(s1);
printf("enter second name=");
gets(s2);
strcat(s1,s2);//use of strcat is to combine s1&s2
puts(s1);
return 0;
}
