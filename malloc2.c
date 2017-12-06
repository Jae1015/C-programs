#include<stdio.h>
#include<stdlib.h>
struct book
{
	char title[50];
	int page;
	float price;
};
void main()
{
	int i,n;
	struct book *b;
	printf("enter number of books:\n");
	scanf("%d",&n);
	if((b=(struct book*) malloc(n*sizeof(struct book)))==NULL)
	{
		printf("\nNo space available");
		exit(1);
	}
	printf("Enter details for books");
	for(i=0;i<n;i++)
	{
		
		printf("\nenter book title:\n");
		gets(b[i].title);
		fflush(stdin);
		printf("enter count for pages:\n");
		scanf("%d",&b[i].page);
		printf("enter price:\n");
		scanf("%f",&b[i].price);
	}
	for(i=0;i<n;i++)
	{
		printf("\nBook title:%s\n",b[i].title);
		printf("\nBook pages:%d\n",b[i].page);
		printf("\nBook price:%f\n",b[i].price);
	}
}

