#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int i,n,sum;
	
	cout<<"Enter value of n ";
	cin>>n;
	
	sum = 0;
	i=1;
	while(i<=n)
	{
		sum = sum + i;
		
		i=i+1;
	}
	
	cout<<"Result = "<<sum<<endl;
	getch();
	return 0;
}
