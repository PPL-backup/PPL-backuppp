//area of triangle semiperimeter
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
	int a,b,c;
	float s,ar;
	printf("enter length of all 3 sides of the triangle");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area of the triangle is%f",ar);
}


