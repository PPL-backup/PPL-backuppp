#include<stdio.h>
int main()
{
int basicpay,HRA,TA,TS,PT,NS;
printf("enter your salary");
scanf("%d",&basicpay);
HRA=0.1*basicpay;
printf("\nHRA is=%d",HRA);
TA=0.05*basicpay;
printf("\nTA is=%d",TA);
TS=basicpay+HRA+TA;
printf("\nTS is=%d",TS);
PT=0.02*TS;
printf("\nPT is=%d",PT);
NS=TS-PT;
printf("\nyour net salary is=%d",NS);
return 0;
}
