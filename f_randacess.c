#include<stdio.h>
void main()
{
	FILE *fp;
	long n=0L;
	char ch;
	fp=fopen("RANDOM.TXT","r");
	if(fp==NULL)
		printf("FILE COULDNOT BE OPENED");
	else
	{
		while(feof(fp)==0)
		{
			fseek(fp,n,0);
			printf("%c\t%ld\n",getc(fp),ftell(fp);
			n=n+5L;
		}
		fseek(fp,-1L,2);
		do
		{
			printf("%c",getc(fp));
		}
		while(!fseek(fp,-2L,1)); 	//ftell cannot be used as it will aslways be positive as getc automatically increment
		fclose(fp);
    }
}
