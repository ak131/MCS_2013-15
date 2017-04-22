#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
int main()
{
	int num,i=1;
	
	ifstream ifs("2.bin");
	while(ifs.read(reinterpret_cast<char*>(&num),sizeof(num)))
	{	
		cout<<"Number "<<i<<" = "<<num<<endl;
		i++;
	}
	ifs.close();
	
	getch();
	return 0;
}
