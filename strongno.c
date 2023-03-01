#include<stdio.h>
int main()
{
	int n,i,sum,a,prod,digit,b;
	for ( n=2 ; n<=1000 ; n++)
	{
	b=a=n;
	sum=0;
	while (b>0)
	{
		digit=b%10;
		b=b/10;
		prod=1;
		for (i=1;i<=digit;i++)
			prod=prod*i;
			
		sum=sum+prod;	
	}
	if (sum==n)
	printf("The number %d is a strong number\n",n);
	
	}
	return 0;
}
