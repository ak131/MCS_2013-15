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
		Student()
		{
		}
		Student(int rollno,char *name,int marks)
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
		
		int getRollNo()
		{
			return rollno;
		}
		char *getName()
		{
			return name;
		}
		int getMarks()
		{
			return marks;
		}
		
		void setData(int rollno,char *name,int marks)
		{
			this->rollno = rollno;
			strcpy(this->name,name);
			this->marks = marks;
		}
};
int main()
{
	Student *s;
	s = new Student[10];
	int i;
	for(i=0;i<10;i++)
	{
		(s+i)->inputData();
	}
	int large=0,loc=-1,temp;
	for(i=0;i<10;i++)
	{
		temp=(s+i)->getMarks();
		if(temp>large)
		{
			large = temp;
			loc = i;
		}
	}
	cout<<"\nDetails of Student with Highest Marks"<<endl;
	(s+loc)->printData();
	
	delete []s;
	
	getch();
	return 0;
}
