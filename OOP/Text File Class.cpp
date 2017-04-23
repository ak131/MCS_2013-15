#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<fstream>
class Student
{
	int rollno;
	char name[30];
	float GPA[4];
	public:
		Student()
		{
			rollno = 0;
			strcpy(name,"");
			for(int i=0;i<4;i++)
			{
				GPA[i] = 0;
			}
		}
		Student(int rollno,char*name,float GPA[4])
		{
			setData(rollno,name,GPA);
		}
		void inputData()
		{
			cout<<"Enter Student Roll No. : ";
			cin>>rollno;
			cout<<"Enter Student Name : ";
			cin>>name;
			cout<<"Enter Student GPA : "<<endl;
			for(int i=0;i<4;i++)
			{
				cout<<"Semester "<<i+1<<" : ";
				cin>>GPA[i];
			}
		}
		void printData()
		{
			cout<<"\nStudent Roll No. : "<<rollno<<endl;
			cout<<"Student Name : "<<name<<endl;
			cout<<"Student GPA : "<<endl;
			for(int i=0;i<4;i++)
			{
				cout<<"Semester "<<i+1<<" : "<<GPA[i]<<endl;
			}
		}
		void setData(int rollno,char*name,float GPA[4])
		{
			this->rollno = rollno;
			strcpy(this->name,name);
			for(int i=0;i<4;i++)
			{
				this->GPA[i] = GPA[i];
			}
		}
		int getRollno()
		{
			return rollno;
		}
		char*getName()
		{
			return name;
		}
		float*getGPA()
		{
			return GPA;
		}
};
int main()
{
	getch();
	return 0;
}
