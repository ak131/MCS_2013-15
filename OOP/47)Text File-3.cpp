#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
int main()
{
	ofstream ofs("b.txt",ios_base::app);
	ofs<<1<<endl;
	ofs<<"ABC"<<endl;
	ofs<<30<<endl;
	ofs<<2<<endl;
	ofs<<"DEF"<<endl;
	ofs<<40<<endl;
	ofs<<3<<endl;
	ofs<<"GHI"<<endl;
	ofs<<50<<endl;
	ofs.close();
	
	getch();
	return 0;
}
