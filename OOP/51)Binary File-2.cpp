#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
#include<string.h>
class Student
{
	int rollno;
	char name[50];
	int marks;
	public:
		Student()
		{
			rollno = 0;
			strcpy(name,"");
			marks = 0;
		}
		Student(int rollno,char*name,int marks)
		{
			setData(rollno,name,marks);
		}
		void inputData()
		{
			cout<<"Enter Roll No. : ";
			cin>>rollno;
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Marks : ";
			cin>>marks;
		}
		void printData()
		{
			cout<<"\nStudent Roll No. : "<<rollno<<endl;
			cout<<"Student Name : "<<name<<endl;
			cout<<"Student Marks : "<<marks<<endl;
		}
		void setData(int rollno,char*name,int marks)
		{
			this->rollno = rollno;
			strcpy(this->name,name);
			this->marks = marks;
		}
		int getRollno()
		{
			return rollno;
		}
		char*getName()
		{
			return name;
		}
		int getMarks()
		{
			return marks;
		}
};
int main()
{
	ifstream ifs("Student.bin");
	int i=0;
	Student s[10];
	while(ifs.read(reinterpret_cast<char*>(&s[i]),sizeof(s[i])))
	{
		s[i].printData();
		i++;
	}
	ifs.close();
	
	getch();
	return 0;
}
