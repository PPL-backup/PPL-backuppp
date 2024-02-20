//area of traingle base and height
#include<stdio.h>
#include<math.h>
void area();
int main()
{
	area();
	return 0;
}
void area()
{
	int b,h,y,x,c;
	float a,s,ar;
	printf("enter base and height of the traingle");
	scanf("%d%d",&b,&h);
	a=0.5*b*h;
	printf("\nThe area of the traingle is%f",a);
	printf("\nenter length of all 3 sides of the triangle");
	scanf("%d%d%d",&y,&x,&c);
	s=(y+x+c)/2;
	ar=sqrt(s*(s-y)*(s-x)*(s-c));
	printf("\nThe area of the triangle is%f",ar);
}


