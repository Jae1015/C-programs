#include<stdio.h>
void main()
{
	int n,i,j,f=1,a[20],b[20],s=1;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	printf("Enter elements in the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	b[0]=a[0];
	for(i=1;i<n;i++)
	{
		for(j=0;j<s;j++)
		{
			if(a[i]==b[j])
			{
				f=1;
				break;
			}
			else
				f=0;
			
		}
		if(f==0)
		{
			b[s]=a[i];
			s++;
		}
	}
	printf("new array:\n");
	for(i=0;i<s;i++)
	{
		printf("%d\n",b[i]);
	}
}
