#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int n, i;
	cout<<"Enter value of n: ";
	cin>>n;
	cout<<endl;
	cout<<"Numbers from 1 to "<<n<<endl;
	cout<<endl;
	i=1;
	do
	{
		cout<<i<<endl;
		i++;
	} while(i<=n);
	cout<<endl;
	cout<<"Even number from 1 to "<<n<<endl;
	cout<<endl;
	i=2;
	do
	{
		cout<<i<<endl;
		i=i+2;
	} while(i<=n);
	cout<<endl;
	cout<<"Odd numbers from 1 to "<<n<<endl;
	cout<<endl;
	i=1;
	do
	{
		cout<<i<<endl;
		i=i+2;
	} while(i<=n);
	getch();
	return 0;
}
