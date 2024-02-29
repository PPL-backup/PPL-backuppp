//take input of two strings and find their length, reverse them, concanate them, copy them
#include<stdio.h>
#include<string.h>
int main()
{
	int ch,length1,length2;
	char str1[100];
	char str2[100];
	char str3[100];
	printf("enter a first string: ");
	scanf("%s",str1);
	printf("enter a second string: ");
	scanf("%s",str2);
	printf("*MENU*\n 1) length of strings \n 2) copy the string \n 3) concatenate the strings \n 4) reverse the strings \n");
	printf("enter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		length1=strlen(str1);
		printf("the length of the string 1 is:%d\n",length1);
		length2=strlen(str2);
		printf("the length of the string 2 is:%d\n",length2);
		break;
	
		case 2:
		strcpy(str3,str2);
		printf("the copied string is: %s",str1);
		strcpy(str3,str1);
		printf("the copied string is: %s",str2);
		break;
		
		case 3:
		strcat(str1,str2);
		printf("the strings after concatenation are: %s",str1);
		break;
		
		case 4:
		strrev(str1);
		printf("string 1 after reversing is: %s",str1);
		strrev(str2);
		printf("\nstring 2 after reversing is: %s",str2);
		break;
		
	}
return 0;
}
