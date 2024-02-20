//area of rectangle
#include<stdio.h>
void area();
int main()
{
	area();
	return 0;
}
void area()
{
	int l,b;
	float a;
	printf("enter length and breadth of the rectangle");
	scanf("%d%d",&l,&b);
	a=l*b;
	printf("The area of the rectangle is%f",a);
}


