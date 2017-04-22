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
	for(i=0;i<10;i++)
	{
		cout<<"Student Roll No. : "<<(s+i)->rollno<<endl;
		cout<<"Student Name : "<<(s+i)->name<<endl;
		for(j=0;j<4;j++)
		{
			cout<<"Marks of each subject of semester "<<j+1<<endl;
			for(k=0;k<6;k++)
			{
				cout<<"Marks of Subject "<<k+1<<" : "<<(s+i)->marks[j][k]<<endl;
			}
		}
		cout<<"Total Marks = "<<(s+i)->total<<endl;
		cout<<endl;
	}
	
	getch();
	return 0;
}
