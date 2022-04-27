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
 f1=fopen("student.text","r");
 while(fscanf(f1,"%d%s%d",&s1.rno,s1.name,&s1.marks)!=EOF)
{
    printf("%d\t%s%d\n",s1.rno,s1.name,s1.marks);
}
return 0;
}
