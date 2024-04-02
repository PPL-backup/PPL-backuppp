#include<stdio.h>
#include<string.h>
void main(){
	int cons=0,vow=0,i;
	char str[50];
	printf("Enter a string\n");
	scanf("%s",str);
	
	int k=strlen(str);
	
	for(i=0;i<k;i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
		vow++;
		}
		else
		cons++;
	}
	
	printf("Vowels in the string are %d\n",vow);
	printf("Consonants in the string are %d\n",cons);
	

}


