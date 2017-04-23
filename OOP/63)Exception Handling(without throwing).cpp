#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	try{
		cout<<"Program Started"<<endl;
		int i = 5;
		int j;
		cout<<"Give Value of j : ";
		cin>>j;
		cout<<"Result : "<<i/j<<endl;
	}catch(string s)
	{
		cout<<s<<endl;
	}
	getch();
	return 0;
}
