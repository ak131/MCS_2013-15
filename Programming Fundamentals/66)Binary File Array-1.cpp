#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
int main()
{
	int num[10],i;
	ofstream ofs("2.bin");
	for(i=0;i<10;i++)
	{
		cout<<"Number "<<i+1<<" = ";
		cin>>num[i];
		
		ofs.write(reinterpret_cast<char*>(&num[i]),sizeof(num[i]));
	}
	ofs.close();
	
	getch();
	return 0;
}
