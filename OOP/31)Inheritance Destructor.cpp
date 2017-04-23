#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class A
{
	public:
		A()
		{
			cout<<"A Constructor with no argument"<<endl;
		}
		A(int i)
		{
			cout<<"A Constructor with INT argument for i = "<<i<<endl;
		}
		~A()
		{
			cout<<"A Destructor Called"<<endl;
		}
};
class B : public A
{
	public:
		B()
		{
			cout<<"B Constructor with no argument"<<endl;
		}
		B(int i) : A(i)
		{
			cout<<"B Constructor with INT argument for i = "<<i<<endl;
		}
		~B()
		{
			cout<<"B Destructor Called"<<endl;
		}
};
class C : public B
{
	public:
		C()
		{
			cout<<"C Constructor with no argument"<<endl;
		}
		C(int i) : B(i)
		{
			cout<<"C Constructor with INT argument for i = "<<i<<endl;
		}
		~C()
		{
			cout<<"C Destructor Called"<<endl;
		}
};
int main()
{
	C *c;
	c = new C;
	delete c;
	getch();
	return 0;
}
