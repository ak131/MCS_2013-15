#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int i,n;
	
	cout<<"Enter value of n: ";
	cin>>n;
	
	cout<<endl;
	cout<<"Numbers from 1 to "<<n<<endl;
	cout<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<i<<endl;
	}
	cout<<endl;
	cout<<"Even numbers from 1 to "<<n<<endl;
	cout<<endl;
	for(i=2;i<=n;i=i+2)
	{
		cout<<i<<endl;
	}
	cout<<endl;
	cout<<"Odd number from 1 to "<<n<<endl;
	cout<<endl;
	for(i=1;i<=n;i=i+2)
	{
		cout<<i<<endl;
	}
	getch();
	return 0;
}
