#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	float num1, num2;
	char ch;
	
	cout<<"Select an option\n"<<endl;
	cout<<"A. Addition\n"<<endl;
	cout<<"B. Subtraction\n"<<endl;
	cout<<"C. Multiplication\n"<<endl;
	cout<<"D. Division\n"<<endl;
	
	
	cin>>ch;
	
	
	
	switch (ch)
	{
		case 'A':
		case 'a':
			cout<<"Enter first number: ";
			cin>>num1;
			cout<<"Enter second number: ";
			cin>>num2;
			cout<<"\nResult is: "<<num1 + num2<<endl;
			break;
		case 'B':
		case 'b':
			cout<<"Enter first number: ";
			cin>>num1;
			cout<<"Enter second number: ";
			cin>>num2;
			cout<<"\nResult is: "<<num1 - num2<<endl;
			break;
		case 'C':
		case 'c':
			cout<<"Enter first number: ";
			cin>>num1;
			cout<<"Enter second number: ";
			cin>>num2;
			cout<<"\nResult is: "<<num1 * num2<<endl;
			break;
		case 'D':
		case 'd':
			cout<<"Enter first number: ";
			cin>>num1;
			cout<<"Enter second number: ";
			cin>>num2;
			if(num2!=0)
			cout<<"\nResult is: "<<num1 / num2<<endl;
			else
			cout<<"Second number is equal to Zero."<<endl;
			cout<<"Division not possibe."<<endl;
			break;
		default:
			cout<<"\nInvalid Option."<<endl;
	}
	
	getch();
	return 0;
}
