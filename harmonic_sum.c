#include<stdio.h>
void main()
{
	int i,n;
	float k,sum=0.0;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=1.0/i;  
		// either 1 or i should be float;if 1/i is taken,k will always be 0.0000 as only the result is
		//expanded and stored in float but primary result is an integer.
		sum+=k;
	}
	printf("%f",sum);
}

