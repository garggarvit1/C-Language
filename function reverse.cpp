#include<stdio.h>
long int reverse(int);
int main()
{
	long int a,r;
	printf("enter no=");
	scanf("%ld",&a);
	r=reverse(a);
	printf("reverse no=%ld",a);
	return 0;
}
long int reverse (long int x)
{
    long int x,rev,r=0;
	while(x!=0)
	{
		rev=x%10;
		r=r*10+rev;
		x=x/10;
		
	}
	return (r);
}
