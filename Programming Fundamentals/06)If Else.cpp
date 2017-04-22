#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a;
	cout<<"Enter the number ";
	cin>>a;
	
	if ( a > 0 )
	cout<<"Number is +ive"<<endl;
	else if ( a == 0 )
	cout<<"Number is equal to zero"<<endl;
	else
	cout<<"Number is -ive"<<endl;
	
	getch ();
	return 0;
	
}
