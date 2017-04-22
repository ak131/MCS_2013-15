#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int i, n, sum, sign;
	
	cout<<"n = ";
	cin>>n;
	
	sum = 0;
	sign = 1;
	
	
	for(i=1; i<=n; i++)
	{
		sum = sum + i * sign;
		sign = sign * (-1);
	}
	cout<<"Sum is "<<sum<<endl;
	
	getch();
	return 0;
}
