#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
struct Student
{
	int rollno;
	char name[30];
	int marks;
};
int main()
{
	Student s[10];
	ofstream ofs("Student-2.bin");
	for(int i=0;i<10;i++)
	{
		cout<<"Student Roll No. = ";
		cin>>s[i].rollno;
		cout<<"Student Name = ";
		cin>>s[i].name;
		cout<<"Student Marks = ";
		cin>>s[i].marks;
		ofs.write(reinterpret_cast<char*>(&s[i]),sizeof(s[i]));
	}
	ofs.close();
	
	getch();
	return 0;
}
