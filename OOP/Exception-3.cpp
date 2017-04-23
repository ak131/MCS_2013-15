#include<iostream>
using namespace std;
#include<conio.h>
#include<exception>
int main()
{
	int *list[100];
	try
	{
		for(int i=0;i<100;i++)
		{
			list[i] = new int[50000000];
			cout<<"Created list["<<i<<"] of 50000000 components"<<endl;
		}
	}
	catch(bad_alloc &b)
	{
		cout<<b.what()<<endl;	
	}
	
	getch();
	return 0;
}
