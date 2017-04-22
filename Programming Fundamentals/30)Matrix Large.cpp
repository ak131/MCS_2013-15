#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int a[3][3], i , j, large;
	
	cout<<"Enter elements of Matrix."<<endl;
	
	for(i=0 ; i<3 ; i++)
	for(j=0 ; j<3 ; j++)
	cin>>a[i][j];
	
	cout<<"Matrix is "<<endl;
	for(i=0 ; i<3 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		cout<<a[i][j]<<"\t";
		
		cout<<endl;
	}
	cout<<endl;
	
	large = a[1][1];
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			if (a[i][j]>large)
			large = a[i][j];
		}
	}
	cout<<"Larget number is: "<<large;
	
	getch();
	
	return 0;
}
