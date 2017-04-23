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
		friend void function1(A a);
};
void function1(A a)
{
	cout<<"i = "<<a.i<<endl;
}
int main()
{
	A a2;
	a2.setI(1001);
	function1(a2);
	
	getch();
	return 0;
}
