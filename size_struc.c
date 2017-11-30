#include<stdio.h>
struct a
	{
		char b;
		int c;
		char d;	
	}fo;
void main()
{
	
	int ar[10],i;
	char b;
	printf("%d\n",sizeof(b));
	printf("%d\n",sizeof(i));
	printf("%d\n",sizeof(struct a)); //size always for an instance of struct
	printf("%d",sizeof(fo));
}
