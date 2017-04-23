#include<iostream>
using namespace std;
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<fstream>
ofstream ofs;
ifstream ifs;
int i,j,count,loc,check;
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
				GPA[i]=0;
		}
		Student(int rollno,char*name,float*GPA)
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
				this->GPA[i]=GPA[i];
			}
		}
		int getRollno()
		{
			return rollno;
		}
		char * getName()
		{
			return name;
		}
		float * getGPA()
		{
			return GPA;
		}
};
Student s;
Student *s1;
void read()
{
	i=j=count=0;
	loc=check=-1;
	int rollno;
	char name[30];
	float GPA[4];
	ifs.open("Student.txt");
	if(ifs.is_open())
	{
		while(ifs.good())
		{
			ifs>>rollno;
			ifs>>name;
			for(i=0;i<4;i++)
			{
				ifs>>GPA[i];
			}
			count++;
		}
		ifs.close();
		count = count-1;
		s1 = new Student[count];
		ifs.open("Student.txt");
		for(i=0;i<count;i++)
		{
			ifs>>rollno;
			ifs>>name;
			for(j=0;j<4;j++)
			{
				ifs>>GPA[j];
			}
			(s1+i)->setData(rollno,name,GPA);
		}
		ifs.close();
	}
}
void addData()
{
	cout<<"\t\t\tAdd New Data\n"<<endl;
	ofs.open("Student.txt",ios_base::app);
	s.inputData();
	ofs<<s.getRollno()<<endl;
	ofs<<s.getName()<<endl;
	for(i=0;i<4;i++)
		ofs<<s.getGPA()[i]<<endl;
	ofs.close();
	cout<<"\n\t\t\tNew Data Added\n"<<endl;
}
void displayAll()
{
	read();
	cout<<"\t\t\tAll Records"<<endl;
	for(i=0;i<count;i++)
	{
		(s1+i)->printData();
	}
}
void displaySpecific()
{
	read();
	int R,temp;
	cout<<"Enter Roll No. : ";
	cin>>R;
	for(i=0;i<count;i++)
	{
		temp = (s1+i)->getRollno();
		if(temp == R)
		{
			(s1+i)->printData();
			check = 0;
			break;
		}
	}
	if(check == -1)
	{
		cout<<"\n\t\t\tRequired Data Not Found"<<endl;
	}
}
void modifyData()
{
	read();
	int R,temp;
	cout<<"Enter Roll No. : ";
	cin>>R;
	for(i=0;i<count;i++)
	{
		temp = (s1+i)->getRollno();
		if(temp == R)
		{
			loc = i;
			break;
		}
	}
	if(loc == -1)
	{
		cout<<"\n\t\t\tRequired Data Not Found"<<endl;
	}
	else
	{
		cout<<"\t\t\tStudent Old Record"<<endl;
		(s1+loc)->printData();
		cout<<"\n\t\t\tModify Data"<<endl;
		(s1+loc)->inputData();
		ofs.open("Student.txt");
		for(i=0;i<count;i++)
		{
			ofs<<(s1+i)->getRollno()<<endl;
			ofs<<(s1+i)->getName()<<endl;
			for(j=0;j<4;j++)
				ofs<<(s1+i)->getGPA()[j]<<endl;
		}
		ofs.close();
		cout<<"\n\t\t\tData Modified"<<endl;
	}
}
void deleteData()
{
	read();
	int R,temp;
	cout<<"Enter Roll No. : ";
	cin>>R;
	for(i=0;i<count;i++)
	{
		temp = (s1+i)->getRollno();
		if(temp == R)
		{
			loc = i;
			break;
		}
	}
	if(loc == -1)
	{
		cout<<"\n\t\t\tRequired Data Not Found"<<endl;
	}
	else
	{
		cout<<"\t\t\tStudent Old Record"<<endl;
		(s1+loc)->printData();
		ofs.open("Student.txt");
		for(i=0;i<count;i++)
		{
			if(i != loc)
			{
				ofs<<(s1+i)->getRollno()<<endl;
				ofs<<(s1+i)->getName()<<endl;
				for(j=0;j<4;j++)
					ofs<<(s1+i)->getGPA()[j]<<endl;
			}
		}
		ofs.close();
		cout<<"\n\t\t\tData Deleted"<<endl;
	}
}
void passStudents()
{
	read();
	float *temp,sum,CGPA[count];
	for(i=0;i<count;i++)
	{
		sum=0;
		temp = (s1+i)->getGPA();
		for(j=0;j<4;j++)
		{
			sum = sum + temp[j];
		}
		CGPA[i] = sum / 4;
		if(CGPA[i] >=2)
		{
			(s1+i)->printData();
			cout<<"Cumulative GPA : "<<CGPA[i]<<endl;
			check = 0;
		}
	}
	if(check == -1)
	{
		cout<<"\n\t\t\tEvery Student is Fail\n"<<endl;
	}
}
void failStudents()
{
	read();
	float *temp,sum,CGPA[count];
	for(i=0;i<count;i++)
	{
		sum=0;
		temp = (s1+i)->getGPA();
		for(j=0;j<4;j++)
		{
			sum = sum + temp[j];
		}
		CGPA[i] = sum / 4;
		if(CGPA[i] < 2)
		{
			(s1+i)->printData();
			cout<<"Cumulative GPA : "<<CGPA[i]<<endl;
			check = 0;
		}
	}
	if(check == -1)
	{
		cout<<"\n\t\t\tEvery Student is Pass\n"<<endl;
	}
}
void resultCard()
{
	read();
	if(count==0)
	{
		cout<<"\n\t\t\tNo Record Found"<<endl;
	}
	else
	{
		int R;
		cout<<"Enter Roll No. : ";
		cin>>R;
		float *temp,sum,CGPA[count];
		for(i=0;i<count;i++)
		{
			sum=0;
			temp = (s1+i)->getGPA();
			for(j=0;j<4;j++)
			{
				sum = sum + temp[j];
			}
			CGPA[i] = sum / 4;
			if(R == (s1+i)->getRollno())
			{
				loc = i;
				break;
			}
		}
		if(loc == -1)
		{
			cout<<"\n\t\t\tRequired Data Not Found"<<endl;
		}
		else
		{
			(s1+loc)->printData();
			cout<<"\nCumulative GPA : "<<CGPA[loc]<<"/4.00"<<endl;
			if(CGPA[loc]>=4)
				cout<<"\nStudent Grade : A\n"<<endl;
			else if(CGPA[loc]>=3)
				cout<<"\nStudent Grade : B\n"<<endl;
			else if(CGPA[loc]>=2)
				cout<<"\nStudent Grade : C\n"<<endl;
			else
				cout<<"\nStudent Grade : F\n"<<endl;
		}
	}
}
int main()
{
	char ch;
	while(1)
	{
		system("pause");
		system("cls");
		cout<<"Select an Option : "<<endl;
		cout<<"1. Add New Data"<<endl;
		cout<<"2. Modify Data"<<endl;
		cout<<"3. Delete Data"<<endl;
		cout<<"4. Display All Records"<<endl;
		cout<<"5. Display a Specific Record"<<endl;
		cout<<"6. Display Pass Students"<<endl;
		cout<<"7. Display Fail Students"<<endl;
		cout<<"8. Display Result Card"<<endl;
		cout<<"9. Exit"<<endl;
		cout<<"\nEnter Option : ";
		ch = getche();
		system("cls");
		if(ch=='1')
		{
			addData();
		}
		else if(ch=='2')
		{
			modifyData();
		}
		else if(ch=='3')
		{
			deleteData();
		}
		else if(ch=='4')
		{
			displayAll();
		}
		else if(ch=='5')
		{
			displaySpecific();
		}
		else if(ch=='6')
		{
			passStudents();
		}
		else if(ch=='7')
		{
			failStudents();
		}
		else if(ch=='8')
		{
			resultCard();
		}
		else if(ch=='9')
		{
			cout<<"Thanks For Using Our System"<<endl;
			system("pause");
			break;
		}
		else
		{
			cout<<"\n\t\t\tERROR!!! You Entered an Invalid Option\n"<<endl;
		}
	}
	return 0;
}
