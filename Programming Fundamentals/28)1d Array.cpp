#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[5], i=0;
	
	for(i=0 ; i<5 ; i++)
	{
		cout<<"Enter Element: ";
		cin>>a[i];
	}
	for(i=0 ; i<5 ; i++)
	{
		cout<<a[i]<<endl;
		
	}
	
	getch();
	return 0;
}
