#include<iostream>
using namespace std;
#include<conio.h>
int main(int argc,char*argv[])
{
	int i=0;
	for(i=0;i<argc;i++)
	{
		cout<<endl;
		cout<<argv[i]<<endl;
	}
	
	getch();
	return 0;
}
