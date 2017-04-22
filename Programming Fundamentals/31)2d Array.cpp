#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[5][5], i, j;
	int sum,sum0;
	char opt;
	
	cout<<"Enter elements of Matrix"<<endl;
	cout<<endl;
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			cin>>a[i][j];
		}
		cout<<endl;
	}
	cout<<"Matrix is :"<<endl;
	cout<<endl;
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
}
