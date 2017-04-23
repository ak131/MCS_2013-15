#include<iostream>
using namespace std;
#include<conio.h>
int sum(int a,int b)
{
	return a+b;
}
double sum(double a,double b)
{
	return a+b;
}
float sum(float a,float b)
{
	return a+b;
}
int main()
{
	cout<<sum(2,3)<<endl;
	cout<<sum(5.2,3.9)<<endl;
	float a,b;
	cin>>a;
	cin>>b;
	cout<<sum(a,b)<<endl;
	
	getch();
	return 0;
}
