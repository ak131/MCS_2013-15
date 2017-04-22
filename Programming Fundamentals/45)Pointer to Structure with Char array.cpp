#include<iostream>
using namespace std;
#include<conio.h>
struct student
{
	int rollno;
	char name[20];
	int marks;
};
int main()
{
	student *s;
	s = new student[10];
	int i=0;
	for(i=0;i<10;i++)
	{
		cout<<"Enter Roll No : ";
		cin>>(s+i)->rollno;
		cout<<"Enter Name : ";
		cin>>(s+i)->name;
		cout<<"Enter Marks : ";
		cin>>(s+i)->marks;
		cout<<endl;
	}
	cout<<endl;
	for(i=0;i<10;i++)
	{
		cout<<"Student Roll No. "<<(s+i)->rollno<<endl;
		cout<<"Student Name "<<(s+i)->name<<endl;;
		cout<<"Student Marks "<<(s+i)->marks<<endl;
		cout<<endl;
	}
	getch();
	return 0;
}
