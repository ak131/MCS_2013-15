#include<iostream>
using namespace std;
#include<conio.h>
class A
{
	public:
		virtual void function1() = 0;
};
class B : public A
{
	public:
		void function1()
		{
			cout<<"Function of B is Called"<<endl;
		}
};
int main()
{
	//A a;
	B b;
	A *a1;
	a1 = &b;
	a1->function1();
	getch();
	return 0;
}
