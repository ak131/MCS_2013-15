#include<iostream>
using namespace std;
#include<conio.h>
void function1()
{
	cout<<"Function 1 Called "<<endl;
}
void function2()
{
	cout<<"Function 2 Called "<<endl;
}
void function3()
{
	cout<<"Function 3 Called "<<endl;
}
int main()
{
	char ch;
	while(1)
	{
		cout<<"Select an Option : \n"<<endl;
		cout<<"1. Function 1"<<endl;
		cout<<"2. Function 2"<<endl;
		cout<<"3. Function 3"<<endl;
		cout<<"x. Exit"<<endl;
		cin>>ch;
		
		if(ch == '1')
		{
			function1();
		}
		else if(ch == '2')
		{
			function2();
		}
		else if(ch == '3')
		{
			function3();
		}
		else if(ch == 'x')
		{
			break;
		}
		else
		{
			cout<<"\a\nInvalid Option Entered"<<endl;
		}
	}
	
	getch();
	return 0;
}
