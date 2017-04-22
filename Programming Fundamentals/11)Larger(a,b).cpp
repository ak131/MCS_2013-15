#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a, b;
	
	cout<<"Enter first number ";
	cin>>a;
	cout<<"Enter second number ";
	cin>>b;
	
	if(a > b)
	cout<< a <<" is larger than "<< b <<endl;
	
	else if (b>a)
	cout<< b <<" is larger than "<< a <<endl;
	
	else
	cout<<"Numers are equal"<<endl;
	
	getch();
	return 0;
}
