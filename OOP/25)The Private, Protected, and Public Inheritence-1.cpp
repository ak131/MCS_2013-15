#include<iostream>
using namespace std;
#include<conio.h>
class A
{
	private:
		int i;
	protected:
		int j;
	public:
		int k;
		void inputData()
		{
			cout<<"i = ";
			cin>>i;
			cout<<"j = ";
			cin>>j;
			cout<<"k = ";
			cin>>k;
		}
		void printData()
		{
			cout<<"\ni : "<<i<<endl;
			cout<<"j : "<<j<<endl;
			cout<<"k : "<<k<<endl;
		}
};
class B : private A
{
	public:
		void inputData()
		{
			cout<<"j = ";
			cin>>j;
			cout<<"k = ";
			cin>>k;
		}
		void function1()
		{
			//cout<<"i = "<<i<<endl;       "i is private"
			cout<<"j = "<<j<<endl;
			cout<<"k = "<<k<<endl;
		}
};
class C : public B
{
	public:
		void function2()
		{
			//cout<<"i = "<<i<<endl;       "i is private"
			//cout<<"j = "<<j<<endl;       "j is protected"
			//cout<<"k = "<<k<<endl;       "k is inaccessible. Because it is private in B"
		}
};
int main()
{
	A a;
	a.inputData();
	a.printData();
	cout<<endl;
	
	B b;
	b.inputData();
	b.function1();
	cout<<endl;
	
	C c;
	c.function2();
	cout<<endl;
	
	getch();
	return 0;
}
