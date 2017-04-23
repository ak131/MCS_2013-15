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
		static void printI()
		{
			cout<<"i = "<<i<<endl;
		}
};
int A :: i = 0;
int main()
{
	cout<<"A :: i = "<<A::i<<endl;
	A a;
	a.i = 15;
	a.printI();
	A::printI();
	
	getch();
	return 0;
}
