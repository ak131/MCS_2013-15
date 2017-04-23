#include<iostream>
using namespace std;
#include<conio.h>
class A
{
	int i;
	public:
		A()
		{
			cout<<"Constructor Called"<<endl;
		}
		~A()
		{
			cout<<"Destructor Called"<<endl;
		}
		void setI(int i)
		{
			this->i = i;
		}
		void printI()
		{
			cout<<"i = "<<i<<endl;
		}
};
int main()
{
	A *a=new A[5];
	delete [] a;
	
	getch();
	return 0;
}
