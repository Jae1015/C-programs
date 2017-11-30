#include<stdio.h>
struct car
{
	char name[15];
	int gears;
	int year;
};
void main()
{
	struct car *swiftd,swift2;
	swiftd=&swift2;
	scanf("%d",&swiftd->gears);
	printf("%d",(*swiftd).gears); 
}
