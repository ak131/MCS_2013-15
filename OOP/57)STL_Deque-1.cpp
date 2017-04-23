#include<iostream>
using namespace std;
#include<conio.h>
#include<deque>
int main()
{
	deque<int> dq;
	deque<int> :: iterator it1;
	dq.push_front(1);
	dq.push_front(2);
	dq.push_back(3);
	dq.push_front(4);
	dq.push_back(5);
	dq.push_back(6);
	dq.push_front(7);
	dq.push_back(8);
	dq.push_back(9);
	dq.push_front(10);
	for(it1=dq.begin();it1!=dq.end();it1++)
	{
		cout<<*it1<<endl;
	}
	getch();
	return 0;
}
