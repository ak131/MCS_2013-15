#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a=7;
	int *b;
	
	b = &a;
	
	cout<<"Value of a is "<<a<<"\nValue of *aptr is "<<*b<<endl;
	cout<<endl;
	cout<<"Address of a is "<<&a<<"\nValue of aptr is "<<b<<endl;
	cout<<endl;
	cout<<"Showing that * and & are inverse of each other:"<<endl;
	cout<<"&*aptr = "<<&*b<<endl;
	cout<<"*&ptr = "<<*&b<<endl;
	
	getch();
	return 0;
}
