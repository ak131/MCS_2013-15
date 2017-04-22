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
	int result;
	result = f1(5,6);
	cout<<"Result = "<<result<<endl;
	
	getch();
	return 0;
}
