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
		friend A function();
};
A function()
{
	A a;
	cout<<"Enter i : ";
	cin>>a.i;
	cout<<"Enter j : ";
	cin>>a.j;
	cout<<"\ni : "<<a.i<<endl;
	cout<<"j : "<<a.j<<endl;
	
	return a;
}
int main()
{
	A a2;
	a2 = function();
	a2.printData();
	getch();
	return 0;
}
