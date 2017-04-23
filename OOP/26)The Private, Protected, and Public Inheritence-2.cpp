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
class B : public A
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
		void inputData()
		{
			cout<<"j = ";
			cin>>j;
			cout<<"k = ";
			cin>>k;
		}
		void function2()
		{
			//cout<<"i = "<<i<<endl;       "i is private"
			cout<<"j = "<<j<<endl;
			cout<<"k = "<<k<<endl;
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
	c.inputData();
	c.function2();
	cout<<endl;
	
	getch();
	return 0;
}
