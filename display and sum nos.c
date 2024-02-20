//display n terms and sum of natural nos.
#include<stdio.h>
int main()
{
int n,i,sum;
printf("enter no. of natural numbers");
scanf("%d",&n);
i=1;
sum=0;
	while(i<=n)
	{
	printf("\n%d",i);
	sum=sum+i;
	i++;
	}
	printf("\nthe sum is%d",sum);
return 0;	
}
