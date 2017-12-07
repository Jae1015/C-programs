#include<stdio.h>
void main()
{
	FILE *fp;
	int c=0,a=0,v=0,co=0;
	char ch;
	fp=fopen("poem.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		c++;
		if(ch==' '||ch=='\n'||ch=='!');
		else if(ch=='A'||ch=='a'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
			a++,v++;
		else
			a++,co++;
	}
	printf("characters= %d\n",c);
	printf("consonants= %d\n",co);
	printf("vowels= %d\n",v);
	printf("alphabhets= %d\n",a);
}
