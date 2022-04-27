#include<stdio.h>
struct student
{
int rno;
char name[20];
int marks;
};
int main()
{
 FILE *f1;
 struct student s1;
 char ch;
 f1=fopen("student.text","w");
do
{
    printf("enter rno,name,marks=");
    scanf("%d%s%d",&s1.rno,s1.name,&s1.marks);
    fprintf(f1,"%d\t%s\t%d\n",s1.rno,s1.name,s1.marks);
    printf("do you want more rotation<y/n>=");
    fflush(stdin);
    scanf("%c",&ch);
}
while(ch=='y');
return 0;
}
