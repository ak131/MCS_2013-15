#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a;
	
	cout<<"Enter the number ";
	cin>>a;
	
	if (( a >= 500 ) && ( a <= 1000 ))
	cout<<"The number exist in the range of 500 to 1000"<<endl;
	else
	cout<<"The number dose not exist in the range of 500 to 1000"<<endl;
	getch ();
	return 0;
}
