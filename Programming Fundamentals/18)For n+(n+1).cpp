#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int i, n, sum;
	
	cout<<"n = ";
	cin>>n;
	
	sum = 0;
	
	for(i=1; i<=n; i++)
	{
		sum = sum + (i+(i+1));
	}
	
	cout<<"Sum is "<<sum<<endl;
	
	getch();
	return 0;
}
