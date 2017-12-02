#include<stdio.h>
#include<string.h>
void main()
{
	int i=0,j=0;
	char str1[30],str2[30],str3[50];
	printf("Enter string1:\n");
	gets(str1);
	printf("Enter string2:\n");
	gets(str2);
	while(str1[i]!='\0')
	{
		str3[i]=str1[i];
		i++;
	}
	while(str2[j]!='\0')
	{
		str3[i+j]=str2[j];
		j++;
	}
	str3[i+j+1]='\0';
	printf("%s",str3);
}
