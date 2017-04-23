#include<iostream>
using namespace std;
#include<conio.h>
#include<vector>
#include<algorithm>
int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(3);
	v.push_back(5);
	v.push_back(2);
	v.push_back(8);
	v.push_back(7);
	v.push_back(1);
	v.push_back(9);
	v.push_back(4);
	v.push_back(6);
	vector<int> :: iterator it1;
	cout<<"Values in vector before sorting : "<<endl;
	for(it1=v.begin();it1!=v.end();it1++)
	{
		cout<<*it1<<endl;
	}
	sort(v.begin(),v.end());
	cout<<"Values in vector after sorting : "<<endl;
	for(it1=v.begin();it1!=v.end();it1++)
	{
		cout<<*it1<<endl;
	}
	getch();
	return 0;
}
