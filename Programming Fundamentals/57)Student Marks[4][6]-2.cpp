#include<iostream>
using namespace std;
#include<conio.h>
struct Student
{
	int rollno;
	char name[20];
	int marks[4][6];
	int total;
};
int main()
{
	Student *s = new Student[10];
	int i,j,k;
	for(i=0;i<10;i++)
	{
		(s+i)->total = 0;
		cout<<"Enter Student Roll No. : ";
		cin>>(s+i)->rollno;
		cout<<"Enter Student Name : ";
		cin>>(s+i)->name;
		for(j=0;j<4;j++)
		{
			cout<<"Enter marks of each subject of semester "<<j+1<<endl;
			for(k=0;k<6;k++)
			{
				cout<<"Subject "<<k+1<<" : ";
				cin>>(s+i)->marks[j][k];
				(s+i)->total = (s+i)->total + (s+i)->marks[j][k];
			}
		}
		cout<<"Total Marks = "<<(s+i)->total<<endl;
		cout<<endl;
	}
	int large = 0, loc = 0;
	for(i=0;i<10;i++)
	{
		if((s+i)->total > large)
		{
			large = (s+i)->total;
			loc = i;
		}
	}
	cout<<"\nDetails of student with highest total marks : "<<endl;
	cout<<endl;
	cout<<"Roll No. : "<<(s+loc)->rollno<<endl;
	cout<<"Name : "<<(s+loc)->name<<endl;
	for(j=0;j<4;j++)
	{
		cout<<"Marks of Semester "<<j+1<<endl;
		for(k=0;k<6;k++)
		{
			cout<<"Subject "<<k+1<<(s+loc)->marks[j][k]<<endl;
		}
	}
	cout<<"Total Marks : "<<(s+loc)->total<<endl;
	
	getch();
	return 0;
}
