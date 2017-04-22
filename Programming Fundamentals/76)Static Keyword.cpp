#include<iostream>
using namespace std;
#include<conio.h>
void f1()
{
	static int i=0;
	i++;
	cout<<"i = "<<i<<endl;
}
int main()
{
	f1();
	f1();
	f1();
	
	getch();
	return 0;
}
