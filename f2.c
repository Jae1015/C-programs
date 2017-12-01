#include<stdio.h>
void main()
{
	int i,num,n;
	FILE *f1, *f2, *f3;
	f1=fopen("DATA.TXT","w");
	for(i=1;i<=30;i++)
	{
		scanf("%d",&num);
		if(num==-1)
			break;
		putw(num,f1);
	}
	fclose(f1);
	f1=fopen("DATA.TXT","r");
	f2=fopen("EVEN.TXT","w");
	f3=fopen("ODD.TXT","w");
	while((n=getw(f1))!=EOF)
	{
		if(n%2==0)
		{
			putw(n,f2);
		}
		else
			putw(n,f3);
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	f3=fopen("ODD.TXT","r");
	f2=fopen("EVEN.TXT","r");
	printf("EVEN FILE");
	while((n=getw(f2))!=EOF)  // if brackets not used properly,n will be 1 for valid inputs(EOF!=0),!= highe precedence than =
	{
		printf("%4d",n);
	}
	printf("ODD FILE");
	while((n=getw(f3))!=EOF)
	{
		printf("%4d",n);
	}
}
