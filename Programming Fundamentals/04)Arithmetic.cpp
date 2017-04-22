#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a , b;
	int sum, diff, mul;
	float div;
	cout<<"Enter First Number ";
	cin>>a;
	cout<<"Enter Second Number ";
	cin>>b;
	
	sum = a + b;
	cout<<"Sum = "<<sum<<endl;
	
	diff = a - b;
	cout<<"Difference = "<<diff<<endl;
	
	mul = a * b;
	cout<<"Multiplication = "<<mul<<endl;
	
	div = a / b;
	cout<<"Division = "<<div<<endl;
	
	getch ();
	return 0;
}
