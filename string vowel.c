#include<stdio.h>
#include<string.h>
int main()
{
char S1[20];
int i,l,count=0;
printf("enter string=");
gets(S1);
l= strlen(S1);
for(i=0;i<l;i++)
{
if(S1[i]=='a'||S1[i]=='e'||S1[i]=='i'||S1[i]=='o'||S1[i]=='u')
count++;
}
printf("no of vowel %d",count);
return 0;
}
