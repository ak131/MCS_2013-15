#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class A
{
	int i;
	int j;
	char n[50];
	public:
		A()
		{
			cout<<"Constructor With No Arguments is Called"<<endl;
			i = 0;
			j = 0;
			strcpy(n,"");
		}
		A(int i,int j,char*n)
		{
			cout<<"Constructor With All Arguments is Called"<<endl;
			this->i = i;
			this->j = j;
			strcpy(this->n,n);
		}
		A(const A &a)
		{
			cout<<"Copy Constructor Called"<<endl;
			i = a.i;
			j = a.j;
			strcpy(n,a.n);
		}
		void inputData()
		{
			cout<<"Enter i : ";
			cin>>i;
			cout<<"Enter j : ";
			cin>>j;
			cout<<"Enter n : ";
			cin>>n;
		}
		void printData()
		{
			cout<<"\ni = "<<i<<endl;
			cout<<"j = "<<j<<endl;
			cout<<"n = "<<n<<endl;
		}
};
int main()
{
	char *ptr = "ABCDEF";
	A a;
	a.printData();
	A a2 = a;
	a2.printData();
	
	A a3(100,200,ptr);
	a3.printData();
	A a4 = a3;
	a4.printData();
	
	getch();
	return 0;
}
