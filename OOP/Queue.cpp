#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<queue>
int main()
{
	queue<string> name;
	queue<string>:: iterator it;
	
	name.push("Ali");
	name.push("Adnan");
	name.push("Tariq");
	name.push("Fawad");
	
	for(it = name.begin(); it != name.end(); it++)
	{
		cout<<*it<<endl;
	}
	cout<<endl;
	
	name.pop();
	name.pop();
	for(it = name.begin(); it != name.end(); it++)
	{
		cout<<*it<<endl;
	}
	cout<<endl;
	
	getch();
	return 0;
}
