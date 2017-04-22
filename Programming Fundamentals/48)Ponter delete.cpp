#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int *a;
	a = new int[3];
	int i;
	for(i=0;i<3;i++)
	{
		cin>>a[i];
	}
	cout<<"Elements of Array are : "<<endl;
	for(i=0;i<3;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<endl;
	for(i=0;i<3;i++)
	delete(a);
	cout<<"New Elements are : "<<endl;
	for(i=0;i<3;i++)
	{
		cout<<a[i]<<endl;
	}
	getch();
	return 0;
}
