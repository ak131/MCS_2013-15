#include<iostream>
using namespace std;
#include<conio.h>
int f1(int a, int b)
{
	int c = a+b;
	return c;
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
	cout<<"Result = "<<result<<endl;
	
	getch();
	return 0;
}
