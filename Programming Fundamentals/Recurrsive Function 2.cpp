#include<iostream>
using namespace std;
#include<conio.h>
void f1(int i,int j)
{
	if(i<j)
	{
		cout<<"Function Called "<<"i = "<<i<<" j = "<<j<<endl;
		i++;
		f1(i,j);
	}
	else
	cout<<"\nTermination Reached"<<endl;
}
int main()
{
	f1(0,100);
	
	getch();
	return 0;
}
