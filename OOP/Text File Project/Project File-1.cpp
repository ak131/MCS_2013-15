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
	int i,j;
	ofstream ofs("Student.txt");
	Student *s = new Student[10];
	
	for(i=0;i<10;i++)
	{
		(s+i)->inputData();
	}
	
	for(i=0;i<10;i++)
	{
		ofs<<(s+i)->getRollno()<<endl;
		ofs<<(s+i)->getName()<<endl;
		for(j=0;j<4;j++)
		{
			ofs<<(s+i)->getGPA()[j]<<endl;
		}
	}
	ofs.close();
	
	int R,check=-1;
	cout<<"Enter Required Roll No. : ";
	cin>>R;
	int temp_r;
	char temp_n[30];
	float temp_g[4];
	ifstream ifs("Student.txt");
	Student s1;
	for(i=0;i<10;i++)
	{
		ifs>>temp_r;
		ifs>>temp_n;
		for(j=0;j<4;j++)
		{
			ifs>>temp_g[j];
		}
		if(temp_r == R)
		{
			s1.setData(temp_r,temp_n,temp_g);
			s1.printData();
			check = 0;
			break;
		}
	}
	ifs.close();
	if(check == -1)
	{
		cout<<"Required Data Not Found"<<endl;
	}
	getch();
	return 0;
}
