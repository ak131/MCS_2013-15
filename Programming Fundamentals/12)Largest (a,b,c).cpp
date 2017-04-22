#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a, b, c;
	
	cout<<"Enter first number ";
	cin>>a;
	
	cout<<"Enter second number ";
	cin>>b;
	
	cout<<"Enter third number ";
	cin>>c;
	
	if ((a>=b) && (a>=c))
	cout<<a<<" is largest"<<endl;
	
	else if ((b>a) && (b>=c))
	cout<<b<<" is largest"<<endl;
	
	else
	cout<<c<<" is largest"<<endl;
	
	getch();
	return 0;
}
