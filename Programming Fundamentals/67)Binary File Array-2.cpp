#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
int main()
{
	int num[10],i;
	ifstream ifs("2.bin");
	for(i=0;i<10;i++)
	{	
		ifs.read(reinterpret_cast<char*>(&num[i]),sizeof(num[i]));
		cout<<"Number "<<i+1<<" = "<<num[i]<<endl;
	}
	ifs.close();
	
	getch();
	return 0;
}
