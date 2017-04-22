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
	
	ifstream ifs("Student-1.bin");
	ifs.read(reinterpret_cast<char*>(&s),sizeof(s));
	ifs.close();
	
	cout<<"Student Roll No. = "<<s.rollno<<endl;
	cout<<"Student Name = "<<s.name<<endl;
	cout<<"Student Marks = "<<s.marks<<endl;
	
	getch();
	return 0;
}
