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
		friend istream & operator >>(istream & stream,A & a);
		friend ostream & operator <<(ostream & stream,const A & a);
};
istream & operator >>(istream&stream,A & a)
{
	cout<<"Enter i : ";
	stream>>a.i;
	cout<<"Enter j : ";
	stream>>a.j;
}
ostream & operator <<(ostream & stream,const A & a)
{
	cout<<"i : ";
	stream<<a.i<<endl;
	cout<<"j : ";
	stream<<a.j<<endl;
}
int main()
{
	A a;
	cin>>a;
	a.printData();
	cout<<a<<endl;
	getch();
	return 0;
}
