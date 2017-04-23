#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class A
{
	char name[50];
	public:
		A()
		{
			cout<<"A Constructor"<<endl;
			strcpy(name,"");
		}
		A(char*name)
		{
			strcpy(this->name,name);
		}
		void inputData()
		{
			cout<<"Enter Name : ";
			cin>>name;
		}
		void printData()
		{
			cout<<"\nName : "<<name<<endl;
		}
		void setData(char*name)
		{
			strcpy(this->name,name);
		}
		char*getName()
		{
			return name;
		}
};
class B
{
	int id;
	public:
		B()
		{
			cout<<"B Constructor"<<endl;
			id = 0;
		}
		B(int id)
		{
			setData(id);
		}
		void inputData()
		{
			cout<<"Enter ID : ";
			cin>>id;
		}
		void printData()
		{
			cout<<"\nID : "<<id<<endl;
		}
		void setData(int id)
		{
			this->id = id;
		}
		int getId()
		{
			return id;
		}
};
class C : public A, public B
{
};
int main()
{
	C c;
	getch();
	return 0;
}
