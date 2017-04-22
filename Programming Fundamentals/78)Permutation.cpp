#include<iostream>
using namespace std;
#include<conio.h>
void swap(int *num,int i,int j)
{	
	int temp;
	temp = num[i];
	num[i] = num[j];
	num[j] = temp;
}
void permutation(int *num,int n,int i)
{
	if(i == n-1)
	{
		for(int j=0;j<n;j++)
		{
			cout<<num[j];
		}
		cout<<"\n"<<endl;
	}
	else
	{
		for(int j=i;j<n;j++)
		{
			swap(num,i,j);
			permutation(num,n,i+1);
			swap(num,i,j);
		}
	}
}
int main()
{
	int n;
	cout<<"n = ";
	cin>>n;
	cout<<"All Numbers From 1 to n are : "<<endl;
	int num[n];
	for(int i=0;i<n;i++)
	{
		num[i]=i+1;
	}
	for(int i=0;i<n;i++)
	{
		cout<<num[i]<<",";
	}
	cout<<"\n"<<endl;
	cout<<"All Possible Combinations Are : "<<endl;
	permutation(num,n,0);
	
	getch();
	return 0;
}
