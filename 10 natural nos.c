//display sum of first 10 natural nos.
#include<stdio.h>
int main()
{
int i,sum;
i=1;
sum=0;
	while(i<=10)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
return 0;
}
