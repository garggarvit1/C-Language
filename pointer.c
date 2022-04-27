#include<stdio.h>
int main()
{
int i=100,*j,**k;
printf("%d\n",i);
printf("%u\n",i);
printf("%d\n",*(&i));
j=&i;//*pointer type variable allways store address*
printf("%u\n",j);
printf("%u\n",&j);
printf("%d\n",*j);
k=&j;//*pointer to pointer*//
printf("%u\n",k);
printf("%u\n",&k);
printf("%u\n",*k);
printf("%d\n",**k);
return 0;

}
