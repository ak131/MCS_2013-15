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
			throw 0;
		cout<<"Quotient = "<<dividend/divisor<<endl;
	}catch(int x)
	{
		cout<<"Divided by zero Error "<<x<<endl;
	}
	
	getch();
	return 0;
}
