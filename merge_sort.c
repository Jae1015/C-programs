#include<stdio.h>
void main()
{
	int a[10],k=0,b[10],c[20],n1,n2,i,j,temp;
	printf("enter size of array1:\n");
	scanf("%d",&n1);
	printf("Enter elements of array1:\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n1;i++)
	{
		for(j=i+1;j<n1;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	for(i=0;i<n1;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nenter size of array2:\n");
	scanf("%d",&n2);
	printf("Enter elements of array2:\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n2;i++)
	{
		for(j=i+1;j<n2;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	
	for(i=0;i<n2;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	i=0,j=0;
	while(i<n1||j<n2)
	{
		if(i!=n1&&j!=n2)
		{
		
			if(a[i]>b[j])
			{
				c[k]=b[j];
				j++;
				k++;
			}
			else if(a[i]<b[j])
			{
				c[k]=a[i];
				i++;
				++k;
			}
			else
			{
				c[k]=a[i];
				c[++k]=a[i];
				i++,j++,k++;
			}
		}
		else if(i==n1&&j<n2)
		{
			c[k]=b[j];
			j++,k++;
		}
		else
		{
			c[k]=a[i];
			i++;k++;
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}
}
