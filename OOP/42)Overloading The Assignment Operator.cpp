#include<iostream>
using namespace std;
#include<conio.h>
class A
{
	int i;
	int j;
	public:
		A()
		{
			i = 0;
			j = 0;
		}
		A(int i,int j)
		{
			this->i = i;
			this->j = j;
		}
		void printData()
		{
			cout<<"\ni = "<<i<<endl;
			cout<<"j = "<<j<<endl;
		}
		A & operator = (const A & a)
		{
			i = a.i;
			j = 0;
		}
};
int main()
{
	A a(5,6);
	a.printData();
	
	A a2(10,50);
	a2.printData();
	a2 = a;
	a2.printData();
	
	getch();
	return 0;
}
