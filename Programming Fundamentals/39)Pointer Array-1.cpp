#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int *a;
	a = new int[10];
	int i=0;
	cout<<"Enter Values of Array : "<<endl;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<endl;
	cout<<"Values of Array are : "<<endl;
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
	getch();
	return 0;
}
