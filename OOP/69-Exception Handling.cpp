#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int dividend,divisor,quotient;
	
	cout<<"Enter Dividend : ";
	cin>>dividend;
	cout<<"Enter Divisor : ";
	cin>>divisor;
	if(divisor != 0)
	{
		cout<<"Quotient = "<<dividend/divisor<<endl;
	}
	else
	{
		cout<<"Divided by Zero Error"<<endl;
	}
	
	getch();
	return 0;
}
