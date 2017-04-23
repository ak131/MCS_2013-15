#include<iostream>
using namespace std;
#include<conio.h>
class A
{
	int i;
	public:
		A()
		{
			i=0;
		}
		A(int i0)
		{
			i = i0;
		}
		void inputI()
		{
			cout<<"i = ";
			cin>>i;
		}
		void printI()
		{
			cout<<"i : "<<i<<endl;
		}
};
int main()
{
	A *a;
	a = new A[10];
	int i=0;
	for(i=0;i<10;i++)
	{
		a[i].inputI();
	}
	for(i=0;i<10;i++)
	{
		a[i].printI();
	}
	
	delete []a;
	
	getch();
	return 0;
}
