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
		void setData(int i,int j)
		{
			this->i = i;
			this->j = j;
		}
		void printData()
		{
			cout<<"\ni = "<<i<<endl;
			cout<<"j = "<<j<<endl;
		}
		
		friend ostream & operator << (ostream & stream,const A & a);
		friend istream & operator >> (istream & stream, A & a);
};
ostream & operator << (ostream & stream,const A & a)
{
	cout<<"The Object Contains : "<<endl;
	stream<<a.i<<endl;
	stream<<a.j<<endl;
	return stream;
}
istream & operator >> (istream & stream, A & a)
{
	cout<<"Give Values : "<<endl;
	stream>>a.i;
	stream>>a.j;
	return stream;
}
int main()
{
	A a(5,6);
	a.printData();
	
	A a2;
	a2.printData();
	a2.setData(25,50);
	
	cout<<a2<<endl;
	cin>>a2;
	cout<<a2<<endl;
	
	getch();
	return 0;
}
