//perimeter of circle
#include<stdio.h>
void per();
int main()
{
	per();
	return 0;
}
void per()
{
	int r;
	float p;
	printf("enter radius of the circle");
	scanf("%d",&r);
	p=3.14*r*2;
	printf("The perimeter of the circle is%f",p);
}


