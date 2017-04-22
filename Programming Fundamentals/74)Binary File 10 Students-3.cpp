#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
struct Student
{
	int rollno;
	char name[30];
	int marks;
};
int main()
{
	int i=0;
	Student *s=new Student[10];
	ifstream ifs("Student-2.bin");
	while(ifs.read(reinterpret_cast<char*>(s+i),sizeof(s[i])))
	{
		i++;
	}
	ifs.close();
	int large=(s+0)->marks,low=(s+0)->marks,loc1,loc2;
	for(i=0;i<10;i++)
	{
		if((s+i)->marks > large)
		{
			large = (s+i)->marks;
			loc1 = i;
		}
		if((s+i)->marks <= low)
		{
			low = (s+i)->marks;
			loc2 = i;
		}
	}
	cout<<"Student with Highest Marks : \n"<<endl;
	cout<<"Student Roll No. = "<<(s+loc1)->rollno<<endl;
	cout<<"Student Name = "<<(s+loc1)->name<<endl;
	cout<<"Student Marks = "<<(s+loc1)->marks<<endl;
	cout<<endl;
	cout<<"Student with Lowest Marks : \n"<<endl;
	cout<<"Student Roll No. = "<<(s+loc2)->rollno<<endl;
	cout<<"Student Name = "<<(s+loc2)->name<<endl;
	cout<<"Student Marks = "<<(s+loc2)->marks<<endl;
	cout<<endl;
	
	getch();
	return 0;
}
