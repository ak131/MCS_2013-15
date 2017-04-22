#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
int main()
{
	int num;
	cout<<"Number = ";
	cin>>num;
	
	ofstream ofs("1.bin");
	ofs.write(reinterpret_cast<char*>(&num),sizeof(num));
	ofs.close();
	
	getch();
	return 0;
}
