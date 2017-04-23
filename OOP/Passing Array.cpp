#include<iostream>
using namespace std;
#include<conio.h>
void function(int a[5][5])
{
	int i=0,j=0;
	cout<<"Elements of Array : "<<endl;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cout<<a[i][j]<<endl;
}
int main()
{
	int arr[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	function(arr);
	getch();
	return 0;
}
