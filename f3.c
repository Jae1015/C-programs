#include<stdio.h>
void main()
{
	char name[10];
	int i,num,q;	//quantity
	float price;
	FILE* fp;
	fp=fopen("INVENTORY.TXT","w");
	printf("Enter Inventory Data:\n");
	printf("Item Name\tNumber\tPrice\tQuantity\n");
	for(i=0;i<1;i++)	
	{
		scanf("%s%d%f%d",name,&num,&price,&q);
		fprintf(fp,"%s%d%.2f%3d",name,num,price,q);
	}
	fclose(fp);
	fp=fopen("INVENTORY.TXT","r");
	printf("Item Name\tNumber\tPrice\tQuantity\n");
	for(i=0;i<1;i++)
	{
		fscanf(fp,"%s%d%f%d",name,&num,&price,&q);
		printf("%s",name);
		printf("%-9s %-7d %4.2f %4d\n",name,num,price,q);
	}
	fclose(fp);
}
