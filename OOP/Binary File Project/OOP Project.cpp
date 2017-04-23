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
			enter_rollno:
			cout<<"Enter Student Roll No. : ";
			cin>>rollno;
			if(rollno<0)
			{
				cout<<"Invlid Roll No. Entered!!!\nEnter Again : "<<endl;
				goto enter_rollno;
			}
			cout<<"Enter Student Name : ";
			cin>>name;
			cout<<"Enter Student GPA : "<<endl;
			for(int i=0;i<4;i++)
			{
				enter_GPA:
				cout<<"Semester "<<i+1<<" : ";
				cin>>GPA[i];
				if(GPA[i]<0 || GPA[i]>4)
				{
					cout<<"Invlid GPA Entered!!!\nEnter Again : "<<endl;
					goto enter_GPA;
				}
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
		void setData(int rollno,char*name,float*GPA)
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
int read()
{
	i=j=count=0;
	loc=check=-1;
	ifs.open("Student.bin");
	if(ifs.is_open())
	{
		while(ifs.read(reinterpret_cast<char*>(&s),sizeof(s)))
		{
			count++;
		}
		ifs.close();
		ifs.open("Student.bin");
		s1 = new Student[count];
		while(ifs.read(reinterpret_cast<char*>(&s1[i]),sizeof(s1[i])))
		{
			i++;
		}
		ifs.close();
	}
}
void addData()
{
	read();
	ofs.open("Student.bin",ios_base::app);
	int temp1;
	float *temp2;
	re_enter:
	s.inputData();
	if(count!=0)
	{
		temp1 = s.getRollno();
		for(i=0;i<count;i++)
		{
			if(temp1==(s1+i)->getRollno()|| temp1<=0)
			{
				cout<<"\nRoll No. Alread Present!!!"<<endl;
				cout<<"Press Any key to re-enter the Data....."<<endl;
				getch();
				system("cls");
				goto re_enter;
			}
		}
	}
	ofs.write(reinterpret_cast<char*>(&s),sizeof(s));
	ofs.close();
}
void modifyData()
{
	read();
	if(count!=0)
	{
		int R,temp,temp1;
		float temp2[]={0,0,0,0};
		cout<<"Enter Specific Roll No. : ";
		cin>>R;
		for(i=0;i<count;i++)
		{
			temp = (s1+i)->getRollno();
			if(R == temp)
			{
				loc = i;
				break;
			}
		}
		if(loc == -1)
		{
			cout<<"Required Record Not Found"<<endl;
		}
		else
		{
			(s1+loc)->setData(0,"",temp2);
			re_enter:
			(s1+loc)->inputData();
			temp1 = (s1+loc)->getRollno();
			for(i=0;i<count;i++)
			{
				if(temp1==(s1+i)->getRollno()|| temp1<=0)
				{
					cout<<"\nInvalid Data Entered!!!"<<endl;
					cout<<"Press Any key to re-enter the Data....."<<endl;
					getch();
					system("cls");
					goto re_enter;
				}
			}
			ofs.open("Student.bin");
			for(i=0;i<count;i++)
			{
				ofs.write(reinterpret_cast<char*>(&s1[i]),sizeof(s1[i]));
			}
			ofs.close();
			cout<<"\n\t\t\tData Modified"<<endl;
		}
	}
	else
	{
		cout<<"No Record Found"<<endl;
	}
}
void deleteData()
{
	read();
	if(count!=0)
	{
		int R,temp;
		cout<<"Enter Specific Roll No. : ";
		cin>>R;
		for(i=0;i<count;i++)
		{
			temp = (s1+i)->getRollno();
			if(R == temp)
			{
				loc = i;
				break;
			}
		}
		if(loc == -1)
		{
			cout<<"Required Record Not Found"<<endl;
		}
		else
		{
			cout<<"\t\t\tStudent Old Record\n"<<endl;
			(s1+loc)->printData();
			char ch;
			cout<<"Press Y to Confirm The Action OR Any Other Key to Cancel : ";
			ch = getch();
			cout<<endl;
			if(ch=='Y' || ch=='y')
			{
				ofs.open("Student.bin");
				for(i=0;i<count;i++)
				{
					if(i!=loc)
					ofs.write(reinterpret_cast<char*>(&s1[i]),sizeof(s1[i]));
				}
				ofs.close();
				cout<<"\n\t\t\tData Deleted"<<endl;
			}
			else
			{
				return;
			}
		}
	}
	else
	{
		cout<<"No Record Found"<<endl;
	}
}
void displayAll()
{
	read();
	if(count!=0)
	{
		for(i=0;i<count;i++)
		{
			(s1+i)->printData();
		}
	}
	else
	{
		cout<<"No Record Found"<<endl;
	}
}
void displaySpecific()
{
	read();
	if(count!=0)
	{
		int R,temp;
		cout<<"Enter Specific Roll No. : ";
		cin>>R;
		for(i=0;i<count;i++)
		{
			temp = (s1+i)->getRollno();
			if(R == temp)
			{
				(s1+i)->printData();
				check = 0;
				break;
			}
		}
		if(check == -1)
		{
			cout<<"Required Record Not Found"<<endl;
		}
	}
	else
	{
		cout<<"No Record Found"<<endl;
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
			cout<<"\t\t\tAdd New Data\n"<<endl;
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
		}
		else if(ch=='7')
		{
		}
		else if(ch=='8')
		{
		}
		else if(ch=='9')
		{
			break;
		}
		else
		{
			cout<<"\n\t\t\tERROR!!! You Entered an Invalid Option\n"<<endl;
		}
	}
	return 0;
}
