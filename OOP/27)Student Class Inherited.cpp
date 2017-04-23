#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class Student
{
	protected:
		char name[30];
		char address[100];
	public:
		void inputData()
		{
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Address : ";
			cin>>address;
		}
		void printData()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Address : "<<address<<endl;
		}
		void setData(char*name,char*address)
		{
			strcpy(this->name,name);
			strcpy(this->address,address);
		}
		char *getName()
		{
			return name;
		}
		char *getAddress()
		{
			return address;
		}
};
class StudentBsc : public Student
{
	int rollno;
	int marks[4];
	public:
		void inputData()
		{
			Student :: inputData();
			cout<<"Enter Roll No. : ";
			cin>>rollno;
			cout<<"Enter Marks : "<<endl;
			for(int i=0;i<4;i++)
			{
				cout<<"Subject "<<i+1<<" : ";
				cin>>marks[i];
			}
		}
		void printData()
		{
			Student :: printData();
			cout<<"Roll No. : "<<rollno<<endl;
			cout<<"Marks : "<<endl;
			for(int i=0;i<4;i++)
			{
				cout<<"Subject "<<i+1<<" : "<<marks[i]<<endl;
			}
		}
		void SetData(char*name,char*address,int rollno,int*marks)
		{
			Student :: setData(name,address);
			this->rollno = rollno;
			for(int i=0;i<4;i++)
				this->marks[i]=marks[i];
		}
		int getRollno()
		{
			return rollno;
		}
		int *getMarks()
		{
			return marks;
		}
};
int main()
{
	StudentBsc s;
	s.inputData();
	cout<<endl;
	s.printData();
	
	getch();
	return 0;
}
