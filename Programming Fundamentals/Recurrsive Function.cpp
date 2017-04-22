#include<iostream>
using namespace std;
#include<conio.h>
void f1(int i)
{
	if(i<10)
	{
		cout<<"Function Called "<<i<<endl;
		i++;
		f1(i);
	}
	else
	return;
}
int main()
{
	f1(0);
	
	getch();
	return 0;
}


