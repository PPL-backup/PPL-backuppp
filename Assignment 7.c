/*Write a program to swap values of two elements. Use function and pass argument using call by Value
and call by reference.*/
#include <stdio.h>
void swap(int* x, int* y,int a,int b)
{
int temp = *x;
*x = *y;
*y = temp;
int tempp = a;
a = b;
b = tempp;
printf("%d\n%d\n",a,b);
}
int main()
{
int x = 10, y = 20, a=30, b=40;
swap(&x, &y,a,b);
printf("%d\n%d\n%d\n%d\n", x, y,a,b);
return 0;
}
