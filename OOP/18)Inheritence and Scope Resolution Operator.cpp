#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class A
{
	int i;
	int j;
	int k;
	public:
		A()
		{
			cout<<"\nConstructor-1 of Class A is Called"<<endl;
			i=0;
			j=0;
			k=0;
		}
		A(int i,int j,int k)
		{
			cout<<"\nConstructor-2 of Class A is Called"<<endl;
			setData(i,j,k);
		}
		void inputData()
		{
			cout<<"i = ";
			cin>>i;
			cout<<"j = ";
			cin>>j;
			cout<<"k = ";
			cin>>k;
		}
		void printData()
		{
			cout<<"\ni = "<<i<<endl;
			cout<<"j = "<<j<<endl;
			cout<<"k = "<<k<<endl;
		}
		void setData(int i,int j,int k)
		{
			this->i=i;
			this->j=j;
			this->k=k;
		}
		int getI()
		{
			return i;
		}
		int getJ()
		{
			return j;
		}
		int getK()
		{
			return k;
		}
};
class B : public A
{
	char i[10];
	char j[10];
	char k[10];
	public:
		B()
		{
			cout<<"\nConstructor-1 of Class B is Called"<<endl;
		}
		B(char*i,char*j,char*k)
		{
			cout<<"\nConstructor-2 of Class B is Called"<<endl;
			setData(i,j,k);
		}
		void inputData()
		{
			A :: inputData();
			cout<<"i : ";
			cin>>i;
			cout<<"j : ";
			cin>>j;
			cout<<"k : ";
			cin>>k;
		}
		void printData()
		{
			A :: printData();
			cout<<"\ni : "<<i<<endl;
			cout<<"j : "<<j<<endl;
			cout<<"k : "<<k<<endl;
		}
		void setData(char*i,char*j,char*k)
		{
			strcpy(this->i,i);
			strcpy(this->j,j);
			strcpy(this->k,k);
		}
		char *getI()
		{
			return i;
		}
		char *getJ()
		{
			return j;
		}
		char *getK()
		{
			return k;
		}
};
int main()
{
	A a;
	a.inputData();
	a.printData();
	A a1(1,2,3);
	a1.printData();
	
	B b;
	b.inputData();
	b.printData();
	B b1("ABC","PQR","XYZ");
	b1.printData();
	
	getch();
	return 0;
}
