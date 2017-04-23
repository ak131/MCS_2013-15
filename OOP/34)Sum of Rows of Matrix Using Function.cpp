#include<iostream>
using namespace std;
#include<conio.h>
void input(int a[4][5])
{
	int i,j;
	cout<<"Enter Elements of The Matrix : "<<endl;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>a[i][j];
		}
		cout<<endl;
	}
}
void sum_rows(int a[4][5])
{
	int i,j,sum;
	for(i=0;i<4;i++)
	{
		sum = 0;
		for(j=0;j<5;j++)
		{
			sum += a[i][j];
		}
		cout<<"Sum of Row "<<i+1<<" : "<<sum<<endl;
	}
}
int main()
{
	int matrix[4][5];
	input(matrix);
	cout<<endl;
	sum_rows(matrix);
	cout<<endl;
	
	int matrix1[4][5]={{10,10,10,10,10},{20,20,20,20,20},{30,30,30,30,30},{40,40,40,40,40}};
	sum_rows(matrix1);
	
	getch();
	return 0;
}
