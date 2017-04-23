#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
int k;
class A
{
	int i;
	int *j;
	char ch[10];
	public:
		A()
		{
			j = new int[5];
			for(k=0;k<5;k++)
				j[k] = 0;
			i = 0;
			strcpy(ch,"");
		}
		A(int i,int*j,char*ch)
		{
			j = new int[5];
			setData(i,j,ch);
		}
		A(const A & a)
		{
			i = a.i + 11;
			for(k=0;k<5;k++)
				j[k] = a.j[k] + k;
			strcpy(ch,a.ch);
		}
		void inputData()
		{
			cin>>i;
			for(k=0;k<5;k++)
				cin>>j[k];
			cin>>ch;
		}
		void printData()
		{
			cout<<"\ni = "<<i<<endl;
			for(k=0;k<5;k++)
				cout<<"j["<<k<<"] = "<<j[k]<<endl;
			cout<<"ch = "<<ch<<endl;
		}
		void setData(int i,int*j,char*ch)
		{
			this->i = i;
			for(k=0;k<5;k++)
				this->j[k] = j[k];
			strcpy(this->ch,ch);
		}
};
int main()
{
	A a;
	a.inputData();
	a.printData();
	A a2=a;
	a2.printData();
	getch();
	return 0;
}
