//accept 5 nos. and display sum and avg
#include<stdio.h>
int main()
{
int a,b,c,d,e,sum,avg;
printf("Enter 5 numbers");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
printf("\nthe sum is%d",sum);
avg=sum/5;
printf("\nthe average is%d",avg);
return 0;
}
