#include<stdio.h>
void main()
{
	int temp,i,f=0,s=1,n;
	printf("Enter total number of terms:\n");
	scanf("%d",&n);
	printf("%d+%d",f,s);
	for(i=0;i<n-2;i++)
	{
		temp=f;
		f=s;
		s+=temp;
		printf("+%d",s);
	}
}
