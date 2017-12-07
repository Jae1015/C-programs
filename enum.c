#include<stdio.h>
enum days
{
	Mon=9,Tues,Wed=5,Thurs,Fri,Sat,Sun
};
void main()
{
	enum days d1=Tues,d2=Wed,d3=Thurs,d4=Fri;
	printf("%d\n",d1);	
	printf("%d\n",d2);	
	printf("%d\n",d3);
	printf("%d\n",d4);


}
