#include<stdio.h>
int main()
{
	int x,a,fact=1,i=1;
	printf("Enter a number:");
	scanf("%d",&x);
	
printf("\n1.factorial\n2.even or odd\n3.positive or negative\n4.square and cube");
printf("\nEnter your choice:");
scanf("%d",&a);
switch(a)
{
case 1: while(i<=x)
	{
		fact=fact*i;
		i++;
	}
	printf("the factorial is:%d",fact);
	break;
case 2: if(x%2==0)
	{
		printf("the no. is even");
	}
		else
		{
			printf("the no. is odd");
		}
	break;	
case 3: if(x>0)
	{
		printf("the no. is positive");
	}
		else
		{
			printf("the no. is negative");
		}
	break;
case 4: 
{
	printf("the square is :%d\n",a*a);
	printf("the cube is :%d",a*a*a);
	}

break;
}
return 0;
}
