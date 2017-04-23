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
			cin.ignore();
			cout<<"Enter Student Name : ";
			cin.getline(name,50);
			cout<<"Enter Studnet Marks : ";
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
		void setData(int rollno1,char*name1,int marks1)
		{
			rollno = rollno1;
			strcpy(name,name1);
			marks = marks1;
		}
};
int main()
{
	int i,n;
	cout<<"Number of Students : ";
	cin>>n;
	Student s[n];
	for(i=0;i<n;i++)
	{
		s[i].inputData();
	}
	int large=0,loc=-1,temp;
	for(i=0;i<n;i++)
	{
		temp = s[i].getMarks();
		if(temp>large)
		{
			large = temp;
			loc = i;
		}
	}
	cout<<"\nDetails of Student with Highest Marks : "<<endl;
	s[loc].printData(); 
	
	getch();
	return 0;
}
