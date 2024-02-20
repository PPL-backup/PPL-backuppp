//check if prime or not
#include<stdio.h>
int main()
{
	int n,p,i,flag=0;
	printf("enter a number");
	scanf("%d",&n);
	p=n/2;
	for(i=2;i<=p;i++)
	{
		if(n%i==0)
		{
			printf("the number is not prime");
			flag=1;
			break;
		}
	}
if(flag==0)
{
	printf("the number is prime");
}
	else
	{
		printf("the number is not prime");
	}
return 0;
}
