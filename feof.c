#include<stdio.h>
void main()
{
	FILE *fp;
	int i,num;
	char name[20];
	fp=fopen("TEST.TXT","w");
	for(i=10;i<=100;i+=10)
		putw(i,fp);
	fclose(fp);
	open_file:
	printf("Enter filename:");
	scanf("%s",name);
	fp=fopen(name,"r");
	if(fp==NULL)
	{
		printf("File could not be opened\n");
		printf("Kindly type the filename again:\n");
		goto open_file;
	}
	else
	{
		for(i=1;i<=20;i++)
		{
			num=getw(fp);
			if(feof(fp))
			{
				printf("RAN OUT OF DATA");
				break;
			}
			else printf("%d\n",num);
		}
	}
}
