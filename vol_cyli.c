//volume of cylinder
#include<stdio.h>
void volume();
int main()
{
	volume();
	return 0;
}
void volume()
{
	int r,h;
	float v;
	printf("enter radius and height of the cylinder");
	scanf("%d%d",&r,&h);
	v=3.14*r*r*h;
	printf("The volume of the cylinder is%f",v);
}


