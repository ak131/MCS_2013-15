#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
int main()
{
	ifstream ifs("b.txt");
	int r,m;
	char n[30];
	ifs>>r;
	ifs>>n;
	ifs>>m;
	while(!ifs.eof())
	{
		cout<<"Roll No. : "<<r<<endl;
		cout<<"Name : "<<n<<endl;
		cout<<"Marks : "<<m<<endl;
		ifs>>r;
		ifs>>n;
		ifs>>m;
	}
	ifs.close();
	getch();
	return 0;
}
