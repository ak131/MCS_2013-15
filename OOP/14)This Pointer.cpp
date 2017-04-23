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
		A(int i)
		{
			this->i = i;
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
	A *a(1);
	a = new A(1)[10];
	
	for(i=0;i<10;i++)
	{
		(a+i)->printI();
	}
	
	getch();
	return 0;
}
