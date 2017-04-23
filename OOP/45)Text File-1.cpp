#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
int main()
{
	ofstream ofs("a.txt");
	ofs<<"First"<<endl;
	ofs<<"Second"<<endl;
	ofs<<"Third"<<endl;
	ofs.close();
	getch();
	return 0;
}
