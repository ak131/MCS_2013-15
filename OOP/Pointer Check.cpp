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
			setData(i,j);
		}
		void inputData()
		{
			cin>>i;
			cin>>j;
		}
		void printData()
		{
			cout<<"\ni = "<<i<<endl;
			cout<<"j = "<<j<<endl;
		}
		void setData(int i,int j)
		{
			this->i = i;
			this->j = j;
		}
};
int main()
{
	A a[5];
	int i;
	for(i=0;i<5;i++)
	{
		a[i].inputData();
	}
	for(i=0;i<5;i++)
	{
		a[i].printData();
	}
	
	A *a2;
	a2 = new A[10];
	for(i=0;i<10;i++)
	{
		a2->printData();
		(*(a2+i)).printData();
		a2[i].printData();
		(a2+i)->printData();
	}
	getch();
	return 0;
}
