#include<stdio.h>
int main()
{
int age;
char marital_status,gender;
printf("enter age=");
scanf("%d",&age);
printf("gender<m/f>");
fflush(stdin);
scanf("%c",&gender);
printf("marital_status<y/n>");s
fflush(stdin);
scanf("%c",&marital_status);
if(marital_status=='y'&&age>=18&&gender=='m')
printf("insurance approve");
else
    if(marital_status=='y'&&age>=18&&gender=='f')
printf("insurance approve");
else
if(marital_status=='n'&&age>=30&&gender=='m')
printf("insurance approve");
else
if(marital_status=='n'&&age>=25&&gender=='f')
printf("insurance approve");
else
printf("insurance is not approve");
return 0;
}
