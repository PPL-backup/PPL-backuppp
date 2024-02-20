#include<stdio.h> //count the number of digits
int cnt=0;
int count(int n)
{
	if(n>0)
	{
		cnt++;
		count(n/10);
	}
	else
	{
		return cnt;
	}
}
int main()
{
	int no,c=0;
	printf("Enter a number");
	scanf("%d",&no);
	c=count(no);
	printf("the number of digits are %d",c);
}
