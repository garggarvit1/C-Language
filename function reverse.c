#include<stdio.h>
long int reverse(long int);
int main()
{
	long int a,r;
	printf("enter no=");
	scanf("%ld",&a);
	r=reverse(a);
	printf("reverse no=%ld",r);
	return 0;
}
 long int reverse(long int x)
{
    long int rem,r=0;
	while(x!=0)
	{
		rem=x%10;
		r=r*10+rem;
		x=x/10;

	}

	return (r);
}
