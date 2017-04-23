#include<iostream>
using namespace std;
#include<conio.h>
int f()
{
	return 0;
}
int f(int a)
{
	return a;
}
int f(int a,int b)
{
	return a+b;
}
int f(int a,int b,int c)
{
	return a+b+c;
}
int main()
{
	cout<<"f()= "<<f()<<"\nf(1)= "<<f(1)<<"\nf(2,3)= "<<f(2,3)<<"\nf(4,5,6)= "<<f(4,5,6)<<endl;
	
	getch();
	return 0;
}
