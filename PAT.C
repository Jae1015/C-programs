#include<stdio.h>
int main()
{
	int i,j,k;
   for(i=1;i<=4;i++)
   {
		for(j=i;j>=1;j--)
		{
			if(i==4 && j==1)
				continue;
			else
				printf("%d",j);
		}
		for(k=(7-2*i);k>=1;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
   }
   for(i=0;i<=3;i++)
   {
		for(j=3-i;j>=1;j--)
		{
			printf("%d",j);
		}
		for(k=1;k<=(2*i+1);k++)
		{
			printf(" ");
		}
		for(j=1;j<=(3-i);j++)
		{
			printf("%d",j);
		}
		printf("\n");
   }
   return 0;
}
