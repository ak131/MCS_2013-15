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
		A operator +(const A a)
		{
			i = i + a.i;
			j = j + a.j;
			return *this;
		}
};
int main()
{
	A a(11,22);
	a.printData();
	
	A a2(10,20);
	a2.printData();
	
	A a3;
	a3 = a + a2;
	a3.printData();
	
	getch();
	return 0;
}
