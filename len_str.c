#include<stdio.h>
void main()
{
	int i=0,c=0;
	char str1[30];
	printf("Enter string1:\n");
	gets(str1);
	while(str1[i]!='\0')
	{
		c++;
		i++;
	}
	printf("length of str: %d",c);
}
