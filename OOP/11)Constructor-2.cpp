#include<iostream>
using namespace std;
#include<conio.h>
class A
{
	int i,j;
	public:
		
		A()
		{
			cout<<"Constructor Called"<<endl;
		}
		A(int i0)
		{
			cout<<"Constructor With One Arguments"<<endl;
			i = i0;
		}
		A(int i0,int j0)
		{
			cout<<"Constructor with two Arguments"<<endl;
			setData(i0,j0);
		}
		
		void inputData()
		{
			cin>>i>>j;
		}
		void printData()
		{
			cout<<"i = "<<i<<"\n"<<"j = "<<j<<endl;
		}
		
		int getI()
		{
			return i;
		}
		int getJ()
		{
			return j;
		}
		
		void setData(int i0,int j0)
		{
			i = i0;
			j = j0;
		}
};
int main()
{
	A a;
	A a2(5);
	A a3(1,2);
	a3.printData();
	
	getch();
	return 0;
}
