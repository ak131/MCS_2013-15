#include<iostream>
using namespace std;
#include<conio.h>
void f1(int i,int j)
{
	if(i<j)
	{
		cout<<"Function Called "<<endl;
		i++;
		f1(i,j);
	}
	else
	return;
}
int main()
{
	f1(0,10);
	getch();
	return 0;
}
