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
			setData(i,j);
		}
		void inputData()
		{
			cin>>i;
			cin>>j;
		}
		void printData()
		{
			cout<<"i = "<<i<<endl;
			cout<<"j = "<<j<<endl;
		}
		void setData(int i,int j)
		{
			this->i = i;
			this->j = j;
		}
		A & operator =(const A & a)
		{	
			i = a.i;
			j = a.j;
			return *this;
		}
};
int main()
{
	A a(1,2);
	a.printData();
	A a2(3,4);
	a2.printData();
	a2 = a;
	a2.printData();
	getch();
	return 0;
}
