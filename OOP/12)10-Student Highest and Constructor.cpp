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
		Student(int rollno1,char *name1,int marks1)
		{
			setData(rollno1,name1,marks1);
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
		
		void setData(int rollno1,char *name1,int marks1)
		{
			rollno = rollno1;
			strcpy(name,name1);
			marks = marks1;
		}
};
int main()
{
	Student s[10];
	int i;
	for(i=0;i<10;i++)
	{
		s[i].inputData();
	}
	int large=0,loc=-1,temp;
	for(i=0;i<10;i++)
	{
		temp=s[i].getMarks();
		if(temp>large)
		{
			large = temp;
			loc = i;
		}
	}
	cout<<"\nDetails of Student with Highest Marks"<<endl;
	s[loc].printData();
	
	getch();
	return 0;
}
