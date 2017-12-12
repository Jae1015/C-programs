#include<stdio.h>
void main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("vowel.txt","r");
	fp2=fopen("a.txt","w");
	while((ch=getc(fp1))!=EOF)
	{
		putc(ch,fp2);
	}
}
