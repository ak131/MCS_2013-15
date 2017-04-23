#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class Student
{
	int rollno;
	char name[50];
	int marks;
	public:
		void inputData()
		{
			cout<<"Enter Student Roll No. : ";
			cin>>rollno;
			cout<<"Enter Student Name : ";
			cin>>name;
			cout<<"Enter Student Marks : ";
			cin>>marks;
		}
		void printData()
		{
			cout<<"\nStudent Roll No. : "<<rollno<<endl;
			cout<<"Student Name : "<<name<<endl;
			cout<<"Student Marks : "<<marks<<endl;
		}
};
int main()
{
	Student s,s1;
	s.inputData();
	s1.inputData();
	s.printData();
	s1.printData();
	
	getch();
	return 0;
}
