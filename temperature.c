#include<stdio.h>
int main()
{
	int c,f;
	printf("enter temperature in celcius");
	scanf("%d",&c);
	f=32+(1.8*c);
	printf("temperature in fahrenheit is%d",f);
	return 0;
}
