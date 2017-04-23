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
		A operator ++(void)
		{
			i++;
			j++;
			strcpy(n,"increment");
			return *this;
		}
		A operator +(void)
		{
			i=i+2;
			j=j+2;
			strcpy(n,"positive");
			return *this;
		}
		A operator --(void)
		{
			i--;
			j--;
			strcpy(n,"decrement");
			return *this;
		}
		A operator -(void)
		{
			i=i-2;
			j=j-2;
			strcpy(n,"negative");
			return *this;
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
	
	A a(100,200,ptr);
	a.printData();
	A a2 = a;
	a2.printData();
	
	++a2;
	a2.printData();
	+a2;
	a2.printData();
	--a2;
	a2.printData();
	-a2;
	a2.printData();
	
	getch();
	return 0;
}
