#include<stdio.h>
void main()
{
	FILE *fp1,*fp2;
	char ch,f1[10],f2[10]; 
	printf("Enter input file:\n");
	gets(f1);
	fp1=fopen(f1,"r");
	printf("Enter output file:\n");
	gets(f2);
	fp2=fopen(f2,"w");
	while((ch=getc(fp1))!=EOF)
	{
		putchar(ch);
	}
	rewind(fp1); //It was required as we had already reached EOF and it would not have entered the following while loop
	while((ch=getc(fp1))!=EOF)
	{
		if(ch==' ')
		{
			ch='-';
			putc(ch,fp2);
		}
		else if(ch=='\t')
		{
			ch='%';
			putc(ch,fp2);
		}
		else if(ch=='\n')
		{
			ch='$';
			putc(ch,fp2);
		}
		else putc(ch,fp2);
	}
	printf("\n");
	fclose(fp2);
	fp2=fopen(f2,"r");
	while((ch=getc(fp2))!=EOF)
	{
		printf("%c",ch);
	}
fclose(fp2);
}
