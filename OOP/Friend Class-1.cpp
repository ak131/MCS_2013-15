#include<iostream>
using namespace std;
#include<conio.h>
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
		
		friend class B;
};
class B
{
	int k;
	public:
		void inputK()
		{
			cout<<"k = ";
			cin>>k;
		}
		void printI(A a)
		{
			cout<<"i = "<<a.i<<endl;
		}
};
int main()
{
	B b;
	b.inputK();
	A a;
	a.inputData();
	b.printI(a);
	
	getch();
	return 0;
}
