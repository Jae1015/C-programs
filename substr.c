#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i=0;
	char str1[20],str2[20];
	printf("Enter the bigger string:\n");
	gets(str1);
	printf("Enter the string to be checked for substring:\n");
	gets(str2);
	while(str2[i]!=NULL)
	{
		if(str1[i]==str2[i])
		{
			i++;
		}
		else
		{
			printf("%s is not a substring of %s",str2,str1);
			exit(1);
		}
	}
	printf("%s is a substring of %s",str2,str1);
}
