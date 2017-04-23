#include<iostream>
using namespace std;
#include<conio.h>
#include<vector>
#include<algorithm>
int main()
{
	vector<int> v;
	v.push_back(5);
	v.push_back(7);
	v.push_back(6);
	vector<int> :: iterator it1;
	sort(v.begin(),v.end());
	for(it1=v.begin();it1!=v.end();it1++)
	{
		cout<<*it1<<endl;
	}
	getch();
	return 0;
}
