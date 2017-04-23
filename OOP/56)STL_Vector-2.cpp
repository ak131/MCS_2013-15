#include<iostream>
using namespace std;
#include<conio.h>
#include<vector>
int main()
{
	vector<int> v;
	v.push_back(5);
	v.push_back(7);
	v.push_back(6);
	vector<int> :: iterator it1;
	int i=0;
	for(i=0;i<v.size();i++)//We can use this method because vector is a 1-dimensional Array
	{
		cout<<v[i]<<endl;
	}
	getch();
	return 0;
}
