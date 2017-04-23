#include<iostream>
using namespace std;
#include<conio.h>
class A
{
	int i;
	protected:
		int j;
	public:
		int k;
		void inputData()
		{
			cin>>i;
			cin>>j;
			cin>>k;
		}
		void printData()
		{
			cout<<"i = "<<i<<endl;
			cout<<"j = "<<j<<endl;
			cout<<"k = "<<k<<endl;
		}
		void setData(int i,int j,int k)
		{
			this->i = i;
			this->j = j;
			this->k = k;
		}
};
class B : public A
{
	public:
		void setData2()
		{
			j = 8;
			k = 15;
		}
};
int main()
{
	B b;
	b.setData(2,4,6);
	b.printData();
	b.setData2();
	b.printData();
	
	getch();
	return 0;
}
