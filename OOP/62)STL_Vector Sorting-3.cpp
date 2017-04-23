#include<iostream>
using namespace std;
#include<conio.h>
#include<vector>
#include<algorithm>
int main()
{
	vector<int> v1;
	int i,m,n;
	cout<<"Number of Elements : ";
	cin>>n;
	cout<<"Enter Elements : "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>m;
		v1.push_back(m);
	}
	vector<int> :: iterator it;
	cout<<"Elements in the vector are : "<<endl;
	for(it = v1.begin();it != v1.end();it++)
	{
		cout<<*it<<endl;
	}
	cout<<"In Sorted Order : "<<endl;
	sort(v1.begin(),v1.end());
	for(it = v1.begin();it != v1.end();it++)
	{
		cout<<*it<<endl;
	}
	getch();
	return 0;
}
