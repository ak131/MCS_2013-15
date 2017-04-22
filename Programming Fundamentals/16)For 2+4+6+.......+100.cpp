#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int i, sum;
	
	sum = 0;
	
	for(i=2; i<=100; i=i+2)
	{
		sum = sum + i;
	}
	cout<<"Result = "<<sum<<endl;
	
	getch ();
	return 0;
}
