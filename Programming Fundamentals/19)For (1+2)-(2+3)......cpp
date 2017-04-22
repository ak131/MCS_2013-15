#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int i, n, sum, sign;
	
	cout<<"n = ";
	cin>>n;
	
	sign = 1;
	sum = 0;
	
	for(i=1; i<=n; i++)
	{
		sum = sum + (i+(i+1))*sign;
		sign = sign * (-1);
	}
	
	cout<<"Result is "<<sum<<endl;
	
	getch();
	return 0;
}
