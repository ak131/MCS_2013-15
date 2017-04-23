#include<iostream>
using namespace std;
#include<conio.h>
#include<map>
int main()
{
	map<string,int> map1;
	map<string,int> :: iterator it1;
	map1["a"] = 20;
	map1["b"] = 50;
	map1["c"] = 100;
	for(it1 = map1.begin();it1 != map1.end();it1++)
	{
		cout<<it1->first<<" is = "<<it1->second<<endl;
	}
	getch();
	return 0;
}
