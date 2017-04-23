#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class A
{
	int i;
	int j;
	public:
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
		
		friend A f1(A a);
		friend void f2(A a2);
};
A f1(A a)
{
	cout<<"i = ";
	cin>>a.i;
	cout<<"j = ";
	cin>>a.j;
	
	return a;
}
void f2(A a)
{
	cout<<"\ni : "<<a.i<<endl;
	cout<<"j : "<<a.j<<endl;
}
int main()
{
	A a,a2;
	
	a.inputData();
	a.printData();
	
	a2 = f1(a);
	f2(a2);
	
	
	getch();
	return 0;
}

