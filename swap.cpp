//wap to count no. of vowels and consonants in a string  using pointers 
#include<iostream>
using namespace std;
void call(int x, int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<x<<'\n'<<y;
	
}
int main()
{
	int a=10;
	int b=20;
	call(a,b);
	return 0;
}
