//Programmer defined exception
//Using built-in exception class
//override const char* what()
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<exception>
class myexception : public exception
{
	char message[100];
	int num;
	public:
		myexception(char* message,int num)
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
		cout<<me.what()<<endl;
	}
	cout<<"Program Completed"<<endl;
	
	getch();
	return 0;
}
