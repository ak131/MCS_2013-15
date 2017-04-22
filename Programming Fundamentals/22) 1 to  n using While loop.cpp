#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int i, n;
	cout<<"Enter value of n: ";
	cin>>n;
	cout<<endl;
	cout<<"Numbers from 1 to "<<n<<endl;
	cout<<endl;
	i=1;
	while(i<=n)
	{
		cout<<i<<endl;
		i++;
	}
	cout<<endl;
	cout<<"Even numbers from 1 to "<<n<<endl;
	cout<<endl;
	i=2;
	while(i<=n)
	{
	
		cout<<i<<endl;
		i=i+2;
	}
	cout<<endl;
	cout<<"Odd numbers from 1 to "<<n<<endl;
	cout<<endl;
	i=1;
	while (i<=n)
	{
		cout<<i<<endl;
		i=i+2;
	}
	getch();
	return 0;
}
