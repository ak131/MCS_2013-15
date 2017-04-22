#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a;
	
	cout<<"Enter a number"<<endl;
	cin>>a;
	
	if (a>100)
	cout<<"Number is greater than 100"<<endl;
	
	else if(a==100)
	cout<<"Number is equal to 100"<<endl;
	
	else
	cout<<"Number is less than 100"<<endl;
	
	getch();
	return 0;
}
