#include<stdio.h> //reverse of a number using function
void rev();
int main()
{
	rev();
	return 0;
}
void rev()
{
	int n,rem,rev=0;
	printf("enter the number:");                                                                                        
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}

printf("the reverse of the number is %d",rev);
}

