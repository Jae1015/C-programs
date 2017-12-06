#include<stdio.h>
void main()
{
	int t,r,a,n;
	printf("Enter dividend and divisor:");
	scanf("%d%d",&n,&a);
	t=n;
	while((r=t%a)!=0)
	{
		t=a;
		a=r;
	}
	printf("HCF = %d",a);
	
}
