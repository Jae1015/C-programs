#include<stdio.h>
void main()
{
	FILE* fp;
	char c;
	fp=fopen("INPUT.DAT","w");
	while((c=getchar())!=EOF)
	{
		putc(c,fp);
	}
	fclose(fp);
	fp=fopen("INPUT.TXT","r");
	printf("DATA OUTPUT:");
	while(getc(fp)!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}
