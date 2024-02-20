#include<stdio.h>
int main()
{
int a,b,c,d,e,aggregate;

printf("enter your marks for 5 subjects");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
if(a>40 && b>40 && c>40 && d>40 && e>40){
	printf("you have passed");

	aggregate=(a+b+c+d+e)/5;
		printf("the average is %d",aggregate);
	if(aggregate>=75){
		printf("\nDistinction");}
	else if(75>aggregate && aggregate>=60){
		printf("\nFirst Division");}
	else if(60>aggregate && aggregate>=50){
		printf("\nSecond division");}
	else if(50>aggregate && aggregate>=40){
		printf("\nThird division");}
else{
	printf("\nYou have failed");
}
}
return 0;
}

