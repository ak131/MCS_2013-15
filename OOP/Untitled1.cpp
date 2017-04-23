#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
int i,j;
class Student
{
	protected:
		char name[30];
		char address[100];
	public:
		Student()
		{
			setData("","");
		}
		Student(const char*name,const char*address)
		{
			setData(name,address);
		}
		
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
		
		void setData(const char*name,const char*address)
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
class StudentBSC : public Student
{
	int rollno;
	int marks[6];
	public:
		StudentBSC()
		{
			rollno = 0;
			for(i=0;i<6;i++)
				marks[i]=0;
		}
		StudentBSC(const char*name,const char*address,int rollno,int*marks) : Student(name,address)
		{
			this->rollno = rollno;
			for(i=0;i<6;i++)
				this->marks[i] = marks[i];
		}
		void inputData()
		{
			Student :: inputData();
			cout<<"Enter Roll No. : ";
			cin>>rollno;
			cout<<"Enter Marks : "<<endl;
			for(i=0;i<6;i++)
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
			for(i=0;i<6;i++)
			{
				cout<<"Subject "<<i+1<<" : "<<marks[i]<<endl;
			}
		}
		void SetData(const char*name,const char*address,int rollno,int*marks)
		{
			Student :: setData(name,address);
			this->rollno = rollno;
			for(i=0;i<6;i++)
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
class StudentMCS : public Student
{
	int rollno;
	int *marks[4];
	public:
		StudentMCS()
		{
			rollno = 0;
			for(i=0;i<4;i++)
				for(j=0;j<6;j++)
					this->marks[i][j]=0;
		}
		StudentMCS(const char*name,const char*address,int rollno,int*marks[]) : Student(name,address)
		{
			this->rollno=rollno;
			for(i=0;i<4;i++)
				for(j=0;j<6;j++)
					this->marks[i][j]=marks[i][j];
		}
		void setMarks()
		{
			for(i=0;i<4;i++)
			{
				this->marks[i] = new int[6];
			}
		}
		void inputData()
		{
			Student :: inputData();
			cout<<"Enter Roll No. : ";
			cin>>rollno;
			cout<<"Enter Marks : "<<endl;
			for(int i=0;i<4;i++)
			{
				cout<<"Semester "<<i+1<<" : "<<endl;
				for(j=0;j<6;j++)
				{
					cout<<"Subject "<<j+1<<" : ";
					cin>>marks[i][j];
				}
			}
		}
		void printData()
		{
			Student :: printData();
			cout<<"Roll No. : "<<rollno<<endl;
			cout<<"Marks : "<<endl;
			for(i=0;i<4;i++)
			{
				cout<<"Semester "<<i+1<<" : "<<endl;
				for(j=0;j<6;j++)
					cout<<"Subject "<<i+1<<" : "<<marks[i]<<endl;
			}
		}
		void SetData(const char*name,const char*address,int rollno,int*marks[])
		{
			Student :: setData(name,address);
			this->rollno = rollno;
			for(int i=0;i<4;i++)
				for(j=0;j<6;j++)
				this->marks[i][j]=marks[i][j];
		}
		int getRollno()
		{
			return rollno;
		}
		int **getMarks()
		{
			return marks;
		}
};
int main()
{
	Student s("Ammad","Multan");
	s.printData();
	cout<<endl;
	
	int marks1[]={1,2,3,4,5,6};
	StudentBSC sb("Ammad","Multan",8,marks1);
	sb.printData();
	
	int **marks2;
	*marks2 = new int[4];
	for(i=0;i<6;i++)
	{
		marks2[i]=new int[6];
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<6;j++)
		{
			marks2[i][j]=i+j;
		}
	}
	StudentMCS sm;
	sm.inputData();
	sm.printData();
	
	getch();
	return 0;
}
