#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int dividend,divisor,quotient;
	try{
		cout<<"Enter Dividend : ";
		cin>>dividend;
		cout<<"Enter Divisor : ";
		cin>>divisor;
		if(divisor == 0)
			throw "Divided By Zero Error!";
		else if(divisor < 0)
			throw divisor;
		cout<<"Quotient = "<<dividend/divisor<<endl;
	}
	catch(string s)
	{
		cout<<s<<endl;
	}
	catch(int x)
	{
		cout<<x<<" Not Allowed"<<endl;
	}
	catch(...)
	{
		cout<<"Error Occured"<<endl;
	}
	
	getch();
	return 0;
}
