#include<stdio.h>
struct student
{
int rno,marks;
char name[20];
};
int main()
{
struct student s[100];
int n,i;
printf("enter no of student=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter rno,name,marks=");
scanf("%d%s%d",&s[i].rno,s[i].name,&s[i].marks);
}
printf("rno\t name\t marks\n");
for(i=0;i<n;i++)
{
printf("%d\t%s\t%d\n",s[i].rno,s[i].name,s[i].marks);
}
return 0;
}
