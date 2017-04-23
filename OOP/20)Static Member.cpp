#include<iostream>
using namespace std;
#include<conio.h>
class A
{
	public:
		static int i;
		void setI(int i)
		{
			this->i = i;
		}
		void printI()
		{
			cout<<"i = "<<i<<endl;
		}
};
int A :: i = 0;
int main()
{
	cout<<"A :: i = "<<A::i<<endl;
	A :: i = 5;
	A a;
	a.printI();
	a.i = 15;
	A a2;
	
	cout<<"a.i = "<<a.i<<endl;
	cout<<"a2.i = "<<a2.i<<endl;
	cout<<"A :: i = "<<A::i<<endl;
	
	getch();
	return 0;
}
