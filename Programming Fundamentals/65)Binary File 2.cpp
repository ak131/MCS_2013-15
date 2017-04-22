#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
int main()
{
	int num;
	
	ifstream ifs("1.bin");
	ifs.read(reinterpret_cast<char*>(&num),sizeof(num));
	ifs.close();
	
	cout<<"Number = "<<num<<endl;
	
	getch();
	return 0;
}
