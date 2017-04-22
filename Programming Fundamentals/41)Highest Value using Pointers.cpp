/* Write a program to create input an array of 10 integers and dispaly
   the highest value using pointer notation.*/

#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int *a;
	a = new int[10];
	int i;
	cout<<"Enter values of array :"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>*(a+i);
		cout<<endl;
	}
	int large=0;
	for(i=0;i<10;i++)
	{
		if(*(a+i)>large)
		large = *(a+i);
	}
	cout<<endl;
	cout<<"\nLargest value in the array is "<<large<<endl;
	
	getch();
	return 0;
}
