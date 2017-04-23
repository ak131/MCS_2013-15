#include<iostream>
using namespace std;
#include<conio.h>
class A
{
	int i,j;
	public:
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
	int i;
	for(i=0;i<10;i++)
	{
		a[i].inputData();
	}
	for(i=0;i<10;i++)
	{
		a[i].printData();
	}
	
	getch();
	return 0;
}
