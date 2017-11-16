#include<stdio.h>
void main()
{
	int j=0,k,n,i,z=0,o=0,r,a[10],s=0;
	printf("enter decimal number\n");
	scanf("%d",&n);
	i=n;
	while(i!=0)
	{
		r=i%2;
		a[j]=r;
		j++;
		i=i/2;
	}
	for(k=j-1;k>=0;k--)
	{
		printf("%d",a[k]);
		if(a[k]==0)
			z++;
		if(a[k]==1)
			o++;
	}
	printf("\nNumber of 0s: %d\n",z);
	printf("Number of 1s: %d",o);
}
