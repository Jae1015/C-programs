#include<stdio.h>
#include<math.h>
int fac(int i)
{
	int j;
	int f=1;
	for(j=1;j<=i;j++)
	{
		f=f*j;
	}
	return f;
}
void main()
{
	int n,i,x,y;
	float sum=1;
	printf("\nEnter number of terms to be printed:");
	scanf("%d",&n);
	printf("\nEnter value of x:");
	scanf("%d",&x);
		for(i=2;i<2*n;i=i+2)
		{
			y=fac(i);
			if(i%4==0)
			{
				sum=sum+(pow(x,i))/y;
			}
			else
			{
				sum=sum-(pow(x,i))/y;
			}
			printf("\n%f\n",sum);
		}
	printf("\ncosine series till %d = %f",n,sum);
}
