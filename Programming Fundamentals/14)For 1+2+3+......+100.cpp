#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int i, sum;
	
	sum = 0;
	
	for(i=0; i<=100; i++)
	{
		sum = sum+i;
	}
	cout<<"Result = "<<sum<<endl;
	
	getch();
	return 0;
}
