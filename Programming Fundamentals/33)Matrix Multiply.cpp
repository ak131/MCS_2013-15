#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int m1, n1, m2, n2, i, j,z;
	
	cout<<"Enter number of rows  of 1st matrix : ";
	cin>>m1;
	cout<<"Enter number of columns of 1st matrix : ";
	cin>>n1;
	cout<<endl;
	
	cout<<"Enter number of rows of 2nd matrix : ";
	cin>>m2;
	cout<<"Enter number of columns of 2nd matrix : ";
	cin>>n2;
	cout<<endl;
	
	int a[m1][n1], b[m2][n2];
	
	cout<<"Enter elements of 1st matrix"<<endl;
	for(i=0; i<m1; i++)
	{
		for(j=0; j<n1; j++)
		cin>>a[i][j];
	}
	cout<<endl;
	
	cout<<"1st matrix is :"<<endl;
	for(i=0; i<m1; i++)
	{
		for(j=0; j<n1; j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	
	cout<<"Enter elements of 2nd matrix"<<endl;
	for(i=0; i<m2; i++)
	{
		for(j=0; j<n2; j++)
		cin>>b[i][j];
	}
	cout<<endl;
	
	cout<<"2nd matrix is :"<<endl;
	for(i=0; i<m2; i++)
	{
		for(j=0; j<n2; j++)
		{
			cout<<"\t"<<b[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	
	int c[m1][n2];
	
	if(n1==m2)
	{
		for(i=0; i<m1; i++)
		{
			for(j=0; j<n2; j++)
			{
				c[i][j]=0;
				for(z=0;z<m2;z++)
				{
					c[i][j]=c[i][j] + (a[i][z]*b[z][j]);
				}
			}
		}
		cout<<endl;
		
		cout<<"Product of matrices is :"<<endl;
		for(i=0; i<m1; i++)
		{
			for(j=0; j<n2; j++)
			{
				cout<<"\t"<<c[i][j];
			}
			cout<<endl;
		}
	}
	else
	cout<<"Multiplication not possible";
	
	getch();
	return 0;
}
