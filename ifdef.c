#include<stdio.h>
#define TEST
void main()
{	
	char ch;
	int c=0;
	FILE *fp;
	fp=fopen("random.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		c++;
	#ifdef TEST
		putchar(ch);
		printf("\n%d\n",c);
	#endif
	}
	printf("%d",c);
}
