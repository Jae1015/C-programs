#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void main()
{
	int a,b;
	printf("enter 1st number:\n");
	scanf("%d",&a);
	printf("enter 2nd number:\n");
	scanf("%d",&b);
	swap(&a,&b);
	printf("a=%d\nb=%d",a,b);
}
