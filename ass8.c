/*Write a program that uses functions to perform the following operations:
a) Reading a complex Number
b) Writing a complex number
c) Addition of two complex numbers
d) Multiplication of two complex numbers.*/
#include<stdio.h>
struct complex_no
{
	int real;
	int imaginary;
}a,b,c;
int main()
{
	int x,mul;

printf("\n1.Reading a complex Number\n2.Writing a complex number\n3.Addition of two complex numbers\n4.Multiplication of two complex numbers");
printf("\nEnter your choice:");
scanf("%d",&x);
switch(x)
{
	case 1: 
	
	printf("enter the real part of the first number: ");
	scanf("%d",&a.real);
	printf("enter the imaginary part of the first number: ");
	scanf("%d",&a.imaginary);
	break;
	
	case 2:
	
	printf("enter the real part of the first number: ");
	scanf("%d",&a.real);
	printf("enter the imaginary part of the first number: ");
	scanf("%d",&a.imaginary);
	printf("The complex number is:%d+%di",a.real,a.imaginary);
	break;
		
	case 3:
		
	printf("enter the real part of the first number: ");
	scanf("%d",&a.real);
	printf("enter the imaginary part of the first number: ");
	scanf("%d",&a.imaginary);
	printf("enter the real part of the second number: ");
	scanf("%d",&b.real);
	printf("enter the imaginary part of the second number: ");
	scanf("%d",&b.imaginary);
	{
		c.real=a.real+b.real;
		c.imaginary=a.imaginary+b.imaginary;
	}
	printf("The addition of the two numbers is: %d+%di",c.real,c.imaginary);
	break;
	
	case 4:
	
	printf("enter the real part of the first number: ");
	scanf("%d",&a.real);
	printf("enter the imaginary part of the first number: ");
	scanf("%d",&a.imaginary);
	printf("enter the real part of the second number: ");
	scanf("%d",&b.real);
	printf("enter the imaginary part of the second number: ");
	scanf("%d",&b.imaginary);
	{
		mul=(a.real*b.real-a.imaginary*b.imaginary)+i(a.real*b.imaginary+b.real*a.imaginary);
	}
	printf("The multiplication of the two numbers is: %d+%di",mul);
	break;
}
return 0;	
}
