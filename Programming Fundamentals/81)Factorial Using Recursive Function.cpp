#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
int fact(int n)
{
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
int main()
{
	int n;
	cout<<"n = ";
	cin>>n;
	
	cout<<n<<"! = "<<fact(n)<<endl;
	
	getch();
	return 0;
}
