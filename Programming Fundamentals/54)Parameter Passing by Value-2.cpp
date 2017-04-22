#include<iostream>
using namespace std;
#include<conio.h>
int f1(int a, int b)
{
	a = 20;
	b = 30;
	return a+b;
}
int main()
{
	int c,d;
	cout<<"First Number : ";
	cin>>c;
	cout<<"Second Number : ";
	cin>>d;
	int result;
	result = f1(c,d);
	cout<<"c = "<<c<<" d = "<<d<<endl;
	cout<<"Result = "<<result<<endl;
	
	getch();
	return 0;
}
