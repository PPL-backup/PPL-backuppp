#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char name[100];
	cin.getline(name,100);
	int i,v=0,c=0;
	for(i=0;name[i]!='\0';i++){
	{
		if(name[i]=='a' || name[i]=='e'|| name[i]=='i' ||  name[i]=='o' || name[i]=='u'){
		v++;	
		}
		else{
			c++;
		}
	}
	}
	cout<<v;
	cout<<c ;	
}
