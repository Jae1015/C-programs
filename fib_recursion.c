#include<stdio.h>
int fib(int n)
{
	int y;
	if(n==0)
		return 0;
	else if(n==1 || n==2)
	{
		 return 1;
	}
	else
	{
		 y=fib(n-1)+fib(n-2);
		 return y;
	}
}
void main()
{
	int i,n,y;
	printf("Enter number of terms to be printed:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		y=fib(i);
		printf("%d\n",y);
	}
}
