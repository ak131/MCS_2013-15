#include<iostream>
using namespace std;
#include<conio.h>
class A
{
	int i;
	public:
		void setI(int i)
		{
			this->i = i;
		}
		void printI()
		{
			cout<<"i = "<<i<<endl;
		}
		friend class B;
};
class B
{
	public:
		void function1(A a)
		{
			cout<<"In function1, a.i = "<<a.i<<endl;
		}
		void function2(A a)
		{
			cout<<"In function2, a.i = "<<a.i<<endl;
		}
};
int main()
{
	A a2;
	a2.setI(10);
	
	B b;
	b.function1(a2);
	b.function2(a2);
	
	getch();
	return 0;
}
