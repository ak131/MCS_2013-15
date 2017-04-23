#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class Student
{
	int i,j;
	protected:
		char name[30];
		char address[100];
	public:
		Student()
		{
			strcpy(name,"");
			strcpy(address,"");
		}
		Student(char*name,char*address)
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
class StudentBSC : public Student
{
	int i,j;
	int rollno;
	int marks[4];
	public:
		StudentBSC()
		{
			rollno = 0;
			for(i=0;i<4;i++)
				marks[i]=0;
		}
		StudentBSC(char*name,char*address,int rollno,int*marks) : Student(name,address)
		{
			this->rollno = rollno;
			for(i=0;i<4;i++)
				this->marks[i] = marks[i];
		}
		void inputData()
		{
			Student :: inputData();
			cout<<"Enter Roll No. : ";
			cin>>rollno;
			cout<<"Enter Marks : "<<endl;
			for(i=0;i<4;i++)
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
			for(i=0;i<4;i++)
			{
				cout<<"Subject "<<i+1<<" : "<<marks[i]<<endl;
			}
		}
		void SetData(char*name,char*address,int rollno,int*marks)
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
	int i,j;
	int rollno;
	int **marks;
	public:
		StudentMCS()
		{
			marks = new int*[4];
			for(i=0;i<4;i++)
			{
				marks[i] = new int[2];
			}
			rollno = 0;
			for(i=0;i<4;i++)
				for(j=0;j<2;j++)
					this->marks[i][j]=0;
		}
		StudentMCS(char*name,char*address,int rollno,int**marks) : Student(name,address)
		{
			*marks = new int[4];
			for(i=0;i<4;i++)
			{
				marks[i] = new int[2];
			}
			this->rollno = rollno;
			for(i=0;i<4;i++)
				for(j=0;j<2;j++)
					this->marks[i][j]=marks[i][j];
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
				for(j=0;j<2;j++)
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
				for(j=0;j<2;j++)
					cout<<"Subject "<<i+1<<" : "<<marks[i][j]<<endl;
			}
		}
		void SetData(char*name,char*address,int rollno,int**marks)
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
	int i,j;
	StudentBSC bs[10];
	for(i=0;i<10;i++)
		bs[i].inputData();
	cout<<endl;
	for(i=0;i<10;i++)
		bs[i].printData();
	cout<<endl;
	
	StudentMCS ms[10];
	for(i=0;i<10;i++)
		ms[i].inputData();
	cout<<endl;
	for(i=0;i<10;i++)
		ms[i].printData();
	cout<<endl;
	
	getch();
	return 0;
}
