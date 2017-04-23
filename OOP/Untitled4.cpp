#include<iostream>
using namespace std;
#include<conio.h>
class A
{
	public:
		static int i;
		static int j;
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
		static void printData()
		{
			cout<<"i = "<<i<<endl;
			cout<<"j = "<<j<<endl;
		}
		void setData(int i,int j)
		{
			this->i = i;
			this->j = j;
		}
};
int main()
{
	A a;
	a.setData(1,2);
	a.printData();
	A a2;
	A::printData();
	getch();
	return 0;
}
