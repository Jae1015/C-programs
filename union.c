#include<stdio.h>
union customer
{
	char name[20];
	unsigned long long int phone;	
};
void main()
{
	union customer x;
	printf("Size of union: %d\n",sizeof(x));
	//printf("size of long int:\%d",sizeof(long int)); 4
	printf("Enter you name:\n");
	gets(x.name);
	printf("name :%s\n",x.name);
	fflush(stdin);
	printf("Enter your contact number:\n");
	scanf("%llu",&x.phone);
	printf("phone: %d\n",x.phone);
	printf("name: %s\n",x.name);
}
