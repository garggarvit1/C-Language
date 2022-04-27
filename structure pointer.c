#include<stdio.h>
struct student
{
    int rno;
    char name[20];
    int marks;
};
int main()
{
    struct student s1={111,"aneri",430};
    struct student *s2;
    s2=&s1;
    printf("roll no=%d\n",s2->rno);
    printf("name=%s\n",s2->name);
    printf("marks=%d\n",s2->marks);
    return 0;
}
