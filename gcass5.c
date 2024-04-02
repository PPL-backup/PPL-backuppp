/*3.Write a program in C to store n elements in an array and print the elements using a pointer.
4.Write a program in C to find the factorial of a given number using pointers.
*/
#include<stdio.h>
#define N 5
int main()
{
	int arr[N];
	int i;
	int *p;
	printf("Enter elements to be stored in an array:");
	
	for (i=0;i<N;i++)
	{
		scanf("%d",arr[i]);
	}
	printf("The numbers stored in the array are:");
	for (i=0;i<N;i++)
	{
		printf("%d",*(arr[i]);
	}
	return 0;
}
