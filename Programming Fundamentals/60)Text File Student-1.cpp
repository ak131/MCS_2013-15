#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
struct Student
{
	int rollno;
	char fname[20];
	char lname[20];
	int marks;
};
int main()
{
	Student s;
	int i;
	ofstream ofs("Student.txt");
	for(i=0;i<10;i++)
	{
		cout<<"Student Roll No. : ";
		cin>>s.rollno;
		cout<<"Student First Name : ";
		cin>>s.fname;
		cout<<"Student Last Name : ";
		cin>>s.lname;
		cout<<"Student Marks : ";
		cin>>s.marks;
		cout<<endl;
		
		ofs<<s.rollno<<endl;
		ofs<<s.fname<<endl;
		ofs<<s.lname<<endl;
		ofs<<s.marks<<endl;
	}
	ofs.close();
	
	getch();
	return 0;
}
