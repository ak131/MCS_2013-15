#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a;
	cout<<"Enter a number"<<endl;
	cin>>a;
	
	if((a>0)&&(a%2==0))
	cout<<"Number is even"<<endl;
	
	else if((a>0)&&(a%2!=0))
	cout<<"Number is odd"<<endl;
	
	else
	cout<<"Invalid Number"<<endl;
	
	getch();
	return 0;
}

