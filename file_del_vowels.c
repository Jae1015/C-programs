#include<stdio.h>
void main()
{
	FILE *fp1,*fp2;
	char ch;	
	fp1=fopen("vowel.txt","r");
	fp2=fopen("vowel1.txt","w");
	while((ch=getc(fp1))!=EOF)
	{
		if(ch=='A'||ch=='a'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
			continue;
		else
			putc(ch,fp2);
	}	
}
