//factorial of a number
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	int i=1,fact=1;
	while(num>=i)
	{
		fact=i*fact;
		i++;
	}
	printf("The factorial of the number is%d",fact);
	return 0;
}

