//volume of square
#include<stdio.h>
void volume();
int main()
{
	volume();
	return 0;
}
void volume()
{
	int l;
	float v;
	printf("enter length of side of the square");
	scanf("%d",&l);
	v=l*l*l;
	printf("The volume of the square is%f",v);
	
}


