#include<stdio.h>
void main()
{
	int i,f=0,temp,s=1,n,sum=0;
	printf("enter number of terms:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		sum+=s;
		temp=f;
		f=s;
		s+=temp;
	}
	printf("%d",sum);
}
