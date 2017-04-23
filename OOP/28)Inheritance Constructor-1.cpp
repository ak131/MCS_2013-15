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
};
class B : public A
{
	public:
		B()
		{
			cout<<"B Constructor with no argument"<<endl;
		}
		B(int i)
		{
			cout<<"B Constructor with INT argument for i = "<<i<<endl;
		}
};
class C : public B
{
	public:
		C()
		{
			cout<<"C Constructor with no argument"<<endl;
		}
		C(int i)
		{
			cout<<"C Constructor with INT argument for i = "<<i<<endl;
		}
};
int main()
{
	C c;
	cout<<endl;
	C c2(5);
	getch();
	return 0;
}
