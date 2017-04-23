#include<iostream>
using namespace std;
#include<conio.h>
class A
{
	int j;
	public:
		static int i;
		void setI(int i)
		{
			this->i = i;
		}
		void printI()
		{
			cout<<"i = "<<i<<endl;
		}
		static void getData()
		{
			cout<<"Static Method"<<endl;
			cout<<i<<endl;
		}
};
int A :: i = 0;
int main()
{
	A a1;
	a1.setI(1);
	a1.printI();
	A a2;
	a2.printI();
	cout<<"A :: i : "<<A::i<<endl;
	A :: getData();
	
	getch();
	return 0;
}
