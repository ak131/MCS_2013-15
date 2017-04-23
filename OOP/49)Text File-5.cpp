#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
int main()
{
	ifstream ifs("b.txt");
	int r,m;
	char n[30];
	//Last Record will be displayed 2 times!!!!
	while(!ifs.eof())
	{
		ifs>>r;
		ifs>>n;
		ifs>>m;
		cout<<"Roll No. : "<<r<<endl;
		cout<<"Name : "<<n<<endl;
		cout<<"Marks : "<<m<<endl;
	}
	ifs.close();
	getch();
	return 0;
}
