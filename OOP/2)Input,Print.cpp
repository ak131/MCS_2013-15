#include<iostream>
using namespace std;
#include<conio.h>
class A
{
	int i;
	public:
		void inputI()
		{
			cin>>i;
		}
		void printI()
		{
			cout<<"i = "<<i<<endl;
		}
};
int main()
{
	A a,a1;
	a.inputI();
	a.printI();
	a1.inputI();
	a1.printI();
	
	getch();
	return 0;
}
