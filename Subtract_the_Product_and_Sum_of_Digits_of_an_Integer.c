#include<stdio.h>
int main()
{
	int n,sum=0,r,product=1,f=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		product=product*r;
		n=n/10;
	}
	f=product-sum;
	printf("%d",f);
	return 0;
}