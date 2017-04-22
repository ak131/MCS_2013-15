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
	Student s;
	ofstream ofs("Student-1.bin");
	
	cout<<"Student Roll No. = ";
	cin>>s.rollno;
	cout<<"Student Name = ";
	cin>>s.name;
	cout<<"Student Marks = ";
	cin>>s.marks;
	
	ofs.write(reinterpret_cast<char*>(&s),sizeof(s));
	ofs.close();
	
	getch();
	return 0;
}
