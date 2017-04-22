#include<iostream>
using namespace std;
#include<conio.h>
#include<string>
#include<fstream>
int main()
{
	int i,count_ch=0,count_line=0,count_word=0;
	char ch,a[100];
	ifstream ifs("Text.txt");
	while(ifs.get(ch))
	{
		if(ch != '\n' && ch !=' ')
		count_ch++;
	}
	ifs.close();
	cout<<"Number of characters : "<<count_ch<<endl;
	ifs.open("Text.txt");
	while(ifs.getline(a,100))
	{
		count_line++;
	}
	ifs.close();
	cout<<"Number of Lines : "<<count_line<<endl;
	ifs.open("Text.txt");
	while(!ifs.eof())
	{
		ifs>>a;
		count_word++;
	}
	ifs.close();
	cout<<"Number of Words : "<<count_word-1<<endl;

	getch();
	return 0;
}
