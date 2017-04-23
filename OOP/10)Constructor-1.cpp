#include<iostream>
using namespace std;
#include<conio.h>
class A
{
	int i,j;
	public:
		
		A()
		{
			cout<<"Constructor Called"<<endl;
		}
				
		void inputData()
		{
			cin>>i>>j;
		}
		void printData()
		{
			cout<<"i = "<<i<<"\n"<<"j = "<<j<<endl;
		}
		
		int getI()
		{
			return i;
		}
		int getJ()
		{
			return j;
		}
		
		void setData(int i0,int j0)
		{
			i = i0;
			j = j0;
		}
};
int main()
{
	A a[10];
	
	getch();
	return 0;
}
