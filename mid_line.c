#include<stdio.h>
struct ends
{
	int x;
	int y;
};
struct ends midp(int,int,int,int);
void main()
{
	struct ends l1,l2,l3;
	printf("Enter coordinates for one end:");
	scanf("%d%d",&l1.x,&l1.y);
	printf("Enter coordinates for the other end:");
	scanf("%d%d",&l2.x,&l2.y);
	l3=midp(l1.x,l1.y,l2.x,l2.y);
	printf("%d\n",l3.x);
	printf("%d",l3.y);
}
 struct ends midp(int x1,int y1,int x2,int y2)
{
	struct ends m;
	m.x=(x1+x2)/2;
	m.y=(y1+y2)/2;
	return m;
}
