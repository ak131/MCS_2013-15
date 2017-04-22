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
	}
	ifs.close();
	int high=0,low=num[0],loc1,loc2;
	for(i=0;i<10;i++)
	{
		if(num[i]>high)
		{
			high = num[i];
			loc1 = i;
		}
		if(num[i]<low)
		{
			low = num[i];
			loc2 = i; 
		}
	}
	cout<<"Largest Number is : "<<endl;
	cout<<"Number "<<loc1+1<<" = "<<num[loc1]<<endl;
	cout<<"\nSmallest Number is : "<<endl;
	cout<<"Number "<<loc2+1<<" = "<<num[loc2]<<endl;
	
	getch();
	return 0;
}
