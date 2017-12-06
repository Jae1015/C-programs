#include<stdio.h>
void main()
{
	int rev=0,n,r,t;
	printf("enter a num:\n");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		r=t%10;
		rev*=10;
		rev+=r;
		t=t/10;
	}
	if(rev==n)
	{
		printf("%d is a palindrome",n);
	}
	else
	{
		printf("%d is not a palindrome",n);
	}
}
