#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int n,i,com=1;
	cout<<"n = ";
	cin>>n;
	if(n>0)
	{
		for(i=n;i>0;i--)
		{
			com = com * i;
		}
		cout<<"Number of Possible Combinations = "<<com<<endl;
	}
	else
	{
		cout<<"n is not a positive integer"<<endl;
	}
	getch();
	return 0;
}
