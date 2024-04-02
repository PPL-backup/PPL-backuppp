#include <stdio.h>
void square(int* a)
{
(*a)*(*a);
}
int main()
{
	int a;
printf("enter a number:");
scanf("%d",&a);
square(&a);
printf("square of the number:%d",a*a);
return 0;
}
