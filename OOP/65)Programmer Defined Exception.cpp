//Programmer defined exception
#include<iostream>
using namespace std;
#include<conio.h>
class myexception
{
	string message;
	int num;
	public:
		myexception(string message,int num)
		{
			this->message = message;
			this->num = num;
		}
		void printError()
		{
			cout<<"The Error Number "<<num<<" Occured"<<endl;
			cout<<"Error  Description : "<<message<<endl;
		}
};
int main()
{
	try{
		int a;
		int b;
		cin>>a;
		cin>>b;
		if(b==0)
			throw myexception("Division By Zero Error",0);
		else
			cout<<"Result : "<<a/b<<endl;
	}catch(myexception me)
	{
		me.printError();
	}
	cout<<"Program Completed"<<endl;
	
	getch();
	return 0;
}
