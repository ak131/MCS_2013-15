#include<iostream>
using namespace std;
#include<conio.h>
#include<set>
int main()
{
	multiset<char> ms;
	multiset<char>:: iterator it;
	ms.insert('A');
	ms.insert('M');
	ms.insert('M');
	ms.insert('A');
	ms.insert('D');
	ms.insert('K');
	ms.insert('H');
	ms.insert('a');
	ms.insert('L');
	ms.insert('I');
	ms.insert('d');
	for(it = ms.begin(); it != ms.end(); it++)
	{
		cout<<*it<<endl;
	}
	cout<<endl;
	ms.erase('M');
	for(it = ms.begin(); it != ms.end(); it++)
	{
		cout<<*it<<endl;
	}
	cout<<endl;
	ms.erase('A');
	for(it = ms.begin(); it != ms.end(); it++)
	{
		cout<<*it<<endl;
	}
	
	getch();
	return 0;
}
