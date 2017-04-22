#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
int main()
{
	ifstream ifs("a.txt");
	char a[100];
	int i;
	for(i=0;i<10;i++)
	{
		ifs.getline(a,100);
		cout<<a<<endl;
	}
	ifs.close();
	
	getch();
	return 0;
}
