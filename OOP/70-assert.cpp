#include<iostream>
using namespace std;
#include<conio.h>
#include<cassert>
int main()
{
	int dividend,divisor,quotient;
	
	cout<<"Enter Dividend : ";
	cin>>dividend;
	cout<<"Enter Divisor : ";
	cin>>divisor;
	assert(divisor != 0);
		quotient = dividend / divisor;
	
	cout<<"Quotient = "<<quotient<<endl;
	
	getch();
	return 0;
}
