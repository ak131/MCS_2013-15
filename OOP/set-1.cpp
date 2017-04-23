#include<iostream>
using namespace std;
#include<conio.h>
#include<set>
int main()
{
	set<int> s1;
	set<int>:: iterator it1;
	s1.insert(1);
	s1.insert(2);
	s1.insert(3);
	for(it1 = s1.begin(); it1 != s1.end(); it1++)
	{
		cout<<*it1<<endl;
	}
	s1.erase(2);
	cout<<endl;
	for(it1 = s1.begin(); it1 != s1.end(); it1++)
	{
		cout<<*it1<<endl;
	}
	
	getch();
	return 0;
}
