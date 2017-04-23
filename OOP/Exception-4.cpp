#include<iostream>
using namespace std;
#include<conio.h>
#include<exception>
#include<string.h>
class myexception : public exception
{
	char message[100];
	int num;
	public:
		myexception(char*message,int num)
		{
			strcpy(this->message,message);
			this->num = num;
		}
		const char* what()
		{
			return message;
		}
		void printError()
		{
			cout<<"Error Number "<<num<<" Occured"<<endl;
			cout<<"Error Description : "<<message<<endl;
		}
};
int main()
{
	int dividend,divisor,quotient;
	
	try
	{
		cout<<"Enter Dividend : ";
		cin>>dividend;
		cout<<"Enter Divisor : ";
		cin>>divisor;
		
		if(divisor == 0)
			throw myexception("Divided by Zero",0);
		else if(divisor < 0)
			throw myexception("Divided by Negative Number",divisor);
		else
			cout<<"Quotient = "<<dividend/divisor<<endl;
	}
	catch(myexception me)
	{
		cout<<me.what()<<endl;
		me.printError();
	}
	
	getch();
	return 0;
}
