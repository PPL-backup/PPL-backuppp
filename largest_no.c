
#include<stdio.h> //display largest number using array
int main()
{
	int arr[10],n,i;
	printf("enter number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]>arr[i+1])
		{
			max=arr[i];
		}
		
	}
	printf("the largest number is %d",max);
    return 0;
}
