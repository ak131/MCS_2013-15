#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
int main()
{
	if(ifstream("Student.bin"))
	{
		cout<<"File Exists"<<endl;
	}
	else
	{
		cout<<"File Dose Not Exists"<<endl;
	}
	
	cout<<"Operation Complete"<<endl;
	getch();
	return 0;
}
