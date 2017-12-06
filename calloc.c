#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[20];
	float age;
	long int id_num;
};
void main()
{
	struct student *ptr;
	int i,class_size;
	printf("Enter size of class:");
	scanf("%d",&class_size);
	if((ptr=(struct student *)calloc(class_size,sizeof(struct student)))==NULL)
	{
		printf("No space available");
		exit(1);
	}
	printf("Enter data for students:");
	for(i=0;i<class_size;i++)
	{
		printf("\nenter name:\n");
		fflush(stdin);
		gets(ptr[i].name);
		printf("enter age:\n");
		scanf("%f",&ptr[i].age);
		printf("enter id:\n");
		scanf("%ld",&ptr[i].id_num);
	}
	for(i=0;i<class_size;i++)
	{
		printf("\nname:%s\n",ptr[i].name);
		printf("\nage:%f\n",ptr[i].age);
		printf("\nid_num:%ld\n",ptr[i].id_num);
	}
			
	
}
