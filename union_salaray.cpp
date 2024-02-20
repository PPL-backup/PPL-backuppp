#include <stdio.h>
union employee{
	char name;
	char des;
	int salary;
}a;
int main()
{
	int TA,DA,gross;
	printf("\nEnter your name:");
	scanf("%s",a.name);
	printf("\nEnter your designation:");
	scanf("%s",a.des);
	printf("\nEnter your salary:");
	scanf("%d",&a.salary);
	TA=0.05*a.salary;
	DA=0.02*a.salary;
	gross=a.salary-(TA+DA);
	printf("\nthe gross salary is:%d",gross);
return 0;
}

