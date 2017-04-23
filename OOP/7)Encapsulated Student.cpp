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
			cout<<"Enter Roll No. : ";
			cin>>rollno;
			cin.ignore();
			cout<<"Enter Name : ";
			cin.getline(name,50);
			cout<<"Enter Marks : ";
			cin>>marks;
			
		}
		void printData()
		{
			cout<<"\nStudent Roll No. = "<<rollno<<endl;
			cout<<"Student Name = "<<name<<endl;
			cout<<"Student Marks = "<<marks<<endl;
		}
		int getRollNo()
		{
			return rollno;
		}
		string getName()
		{
			return name;
		}
		int getMarks()
		{
			return marks;
		}
		void setData(int rollno1,char* name1,int marks1)
		{
			rollno = rollno1;
			strcpy(name,name1);
			marks = marks1;
		}
		void setRollNo(int rollno1)
		{
			rollno = rollno1;
		}
		void setName(char* name1)
		{
			strcpy(name,name1);
		}
		void setMarks(int marks1)
		{
			marks = marks1;
		}
};
int main()
{
	Student s;
	s.inputData();
	s.printData();
	
	cout<<"\nRoll No. = "<<s.getRollNo()<<endl;
	
	s.setData(2,"Ammad",100);
	s.printData();
	s.setRollNo(50);
	s.printData();
	
	getch();
	return 0;
}
