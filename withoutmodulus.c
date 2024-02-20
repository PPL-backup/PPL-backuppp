#include<stdio.h>
int main()
{
	int a,b,q,rem;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	q=a/b;
	rem=a-(q*b);
	printf("remainder is %d",rem);
	return 0;
	}
