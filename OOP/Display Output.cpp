#include<iostream>
using namespace std;
#include<conio.h>
class A
{
	protected:A(){cout<<"A 1"<<endl;}
	public: int p;
		A(int i){cout<<"A 2"<<endl;}
};
class B : A{
	public: int k;
		B(){cout<<"B 1"<<endl;}
};
class C : protected B{
	public: int m;
};
int main()
{
	B b;
	A a(2);
	//C c; c.p=8;
	//B b2; b2.p=6;
	
	getch();
	return 0;
}
