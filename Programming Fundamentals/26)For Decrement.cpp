#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int i,n,x;
	
	x=0;
	cout<<"n = ";
	cin>>n;
	
	for(i=n;i>=1;--i)
	{
		x = i;
		cout<<x<<endl;
	}
	getch();
	return 0;
}
