#include<stdio.h>
#include<stdlib.h>
void main()
{
	int size,*p,*table;
	printf("Enter size:\n");
	scanf("%d",&size);
	if((table=((int*)malloc(size*sizeof(int))))==NULL)
	{
		printf("No space available:");
		exit(1);
	}
	printf("\nAddress of 1st byte:%u \n",table);
	//reading table values
	printf("Input table values:\n");
	for(p=table;p<table+size;p++)
		scanf("%d",p);
	for(p=table+size-1;p>=table;p--)
		printf("%d is stored at %u\n",*p,p);
	printf("Enter new size:");
	scanf("%d",&size);
	if((table=(int*)realloc(table,size*sizeof(int)))==NULL)	
	{
		printf("\nNo space available");
		exit(1);
	}
	printf("\nAddress of 1st byte:%u \n",table);
	printf("\nAddress of last byte:%u \n",table+size);
	
}
