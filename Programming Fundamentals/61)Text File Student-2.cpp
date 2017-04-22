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
	Student *s1=new Student[10];
	int i;
	ifstream ifs("Student.txt");
	for(i=0;i<10;i++)
	{
		ifs>>(s1+i)->rollno;
		ifs>>(s1+i)->fname;
		ifs>>(s1+i)->lname;
		ifs>>(s1+i)->marks;
	}
	ifs.close();
	
	int max=0,loc=0;
	for(i=0;i<10;i++)
	{
		if((s1+i)->marks>max)
		{
			max = (s1+i)->marks;
			loc = i;
		}
	}
	cout<<"Details of Student with Highest Marks : "<<endl;
	cout<<endl;
	cout<<"Student Roll No : "<<(s1+loc)->rollno<<endl;
	cout<<"Student Name : "<<(s1+loc)->fname<<" "<<(s1+loc)->lname<<endl;
	cout<<"Student Marks : "<<(s1+loc)->marks<<endl;
	
	getch();
	return 0;
}
