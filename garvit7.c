#include<stdio.h>
int main()
{
int m,chem,phy,eng,pe ,per=0,total=0;
printf("enter value of math,chem,phy,eng,pe=");
scanf("%d%d%d%d%d",&m,&chem,&eng,&phy,&pe);
total=m+chem+phy+pe+eng;
per=(total*100)/500;
printf("per=%d",per);
if(per>=60)
printf("\n 1st division");
else
if(per>=50&&per<60)
printf("\n 2nd division");
else
if(per>=40&&per<50)
printf("\n 3rd division");
else
if(per<40)
printf("\nfail");
return 0;
}
