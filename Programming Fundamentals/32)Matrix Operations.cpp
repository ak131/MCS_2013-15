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
	cout<<"Matrix is "<<endl;
	cout<<endl;
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	Menu:
	cout<<"Select an option"<<endl;
	cout<<endl;
	cout<<"a. The largest number in matrix together with its location"<<endl;
	cout<<"b. The sum of each row separately"<<endl;
	cout<<"c. The sum of each column separately"<<endl;
	cout<<"d. The largest number in each row"<<endl;
	cout<<"e. The largest number in each column"<<endl;
	cout<<"f. The sum of even numbers in the matrix"<<endl;
	cout<<"g. The sum of odd numbers in the matrix"<<endl;
	cout<<"h. The sum of elements of each diagonal"<<endl;
	cout<<"i. Transpose of the matrix"<<endl;
	cout<<"x. Exit"<<endl;
	cout<<endl;
	cin>>opt;
	cout<<endl;
	cout<<endl;
	switch (opt)
	{
		case 'a':
			int large, loc1, loc2;
			large = a[0][0];
			loc1 = 0;
			loc2 = 0;
			
			for(i=0; i<5; i++)
			{
				for(j=0; j<5; j++)
				{
				if(a[i][j] > large)
				{
				large = a[i][j];
				loc1 = i;
				loc2 = j;
				}
				}
				
			}
			cout<<"Largest number = "<<large<<endl;
			cout<<"Location = "<<loc1<<" Row, "<<loc2<<" Column"<<endl;
			goto Menu;
			break;
		case 'b':
			sum = 0;
			for(i=0;i<5;i++)
			{
			for(j=0; j<5; j++)
			{
				sum = sum + a[i][j];
			}
			cout<<"Sum of elements of row "<<i <<" is "<<sum<<endl;
			sum= 0;
			}
			goto Menu;
			break;
		case 'c':
			sum = 0;
			for(j=0; j<5; j++)
			{
			for(i=0; i<5; i++)
			{
				sum = sum + a[i][j];
			}
			cout<<"Sum of elements of column "<<j<<" is "<<sum<<endl;
			sum = 0;
			}
			goto Menu;
			break;
		case 'd':
			large = a[0][0];
			for(i=0; i<5; i++)
			{
			for(j=0; j<5; j++)
			{
				if(a[i][j] > large)
				large = a[i][j];
			}
				cout<<"Largest number in row "<<i<<" is "<<large<<endl;
				large = 0;
			}
			goto Menu;
			break;
		case 'e':
			large = a[0][0];
			for(j=0; j<5; j++)
			{
				for(i=0; i<5; i++)
				{
					if(a[i][j]>large)
					large = a[i][j];
				}
				cout<<"Largest number in column "<<j<<" is "<<large<<endl;
				large = 0;
			}
			goto Menu;
			break;
		case 'f':
			sum = 0;
			for(i=0; i<5; i++)
			{
				for(j=0; j<5; j++)
				{
					if(a[i][j] % 2 == 0)
					sum = sum + a[i][j];
				}
			}
			cout<<"Sum of even numbers in matrix is "<<sum<<endl;
			goto Menu;
			break;	
		case 'g':
			sum = 0;
			for(i=0; i<5; i++)
			{
				for(j=0; j<5; j++)
				{
					if(a[i][j] % 2 != 0)
					sum = sum + a[i][j];
				}
			}
			cout<<"Sum of odd numbers in matrix is "<<sum<<endl;
			goto Menu;
			break;
		case 'h':
			sum = 0;
			sum0 = 0;
			for(i=0; i<5; i++)
			{
				for(j=0; j<5; j++)
				{
					if(i==j)
					sum = sum + a[i][j];
				}
			}
			for(i=0; i<5; i++)
			{
				for(j=0; j<5; j++)
				{
					if((i+j)==4)
					sum0 = sum0 + a[i][j];
				}
			}
			cout<<"Sum of 1st diagonal is "<<sum<<endl;
			cout<<"Sum of 2nd diagonal is "<<sum0<<endl;
			goto Menu;
			break;
		case 'i':
			cout<<"Transpose of matrix is :"<<endl;
			for(j=0; j<5; j++)
			{
				for(i=0; i<5; i++)
				{
					cout<<"\t"<<a[i][j];
				}
				cout<<endl;
			}
			goto Menu;
			break;
		case 'x':
			break;
		default:
			cout<<"Invalid Option"<<endl;
			break;
			
	}
	
	
	getch();
	return 0;
}
