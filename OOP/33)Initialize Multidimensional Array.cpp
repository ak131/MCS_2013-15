#include<iostream>
using namespace std;
#include<conio.h>
void function1(int a[3][4])
{
	int i=0,j=0;
	cout<<"Elements of the array are : "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			cout<<a[i][j]<<endl;
		cout<<endl;
	}
}
int main()
{
	int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	
	function1(arr);
	
	getch();
	return 0;
}
