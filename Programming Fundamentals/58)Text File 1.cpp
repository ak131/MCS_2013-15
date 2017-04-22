#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
int main()
{
	ofstream ofs("a.txt");
	ofs<<"First 1st"<<endl;
	ofs<<"Second 2nd"<<endl;
	ofs<<"Third 3rd"<<endl;
	ofs<<"Fourth 4th"<<endl;
	ofs<<"Fifth 5th"<<endl;
	ofs<<"Sixth 6th"<<endl;
	ofs<<"Seventh 7th"<<endl;
	ofs<<"Eighth 8th"<<endl;
	ofs<<"Ninth 9th"<<endl;
	ofs<<"Tenth 10th"<<endl;
	ofs.close();
	
	getch();
	return 0;
}
