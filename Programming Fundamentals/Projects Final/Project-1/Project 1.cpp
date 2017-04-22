#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
#include<cstdlib>
int i=0,j=0,k=0,n,check,loc;
struct Student
{
	int rollno;
	char name[30];
	int marks[4][6];
};
Student s,*s1=new Student[100];
void read()
{
	i=n=loc=check=0;
	if(ifstream("Student.bin"))
	{
		ifstream ifs("Student.bin");
		while(ifs.read(reinterpret_cast<char*>(s1+i),sizeof(s1[i])))
		{
			i++;
		}
		n = i;
		ifs.close();
	}
}
void add()
{
	system("cls");
	read();
	cout<<"Enter Student Roll no. : ";
	cin>>s.rollno;
	for(i=0;i<n;i++)
	{
		if((s1+i)->rollno == s.rollno)
		{
			check = 1;
			break;
		}
	}
	if(check == 1)
	{
		cout<<"\n\t\t\tA Student with Same Roll No. is Already Present\n"<<endl;
	}
	else
	{
		cout<<"Enter Student Name : ";
		cin>>s.name;
		for(j=0;j<4;j++)
		{
			marks:
			check = 0;
			cout<<"Enter Marks of Semester "<<j+1<<" : "<<endl;
			for(k=0;k<6;k++)
			{
				cout<<"Marks in Subject "<<k+1<<" : ";
				cin>>s.marks[j][k];
				if(s.marks[j][k]>100||s.marks[j][k]<0)
				{
					check = 2;
					break;
				}
			}
			if(check == 2)
			break;
		}
		if(check != 2)
		{
			ofstream ofs("Student.bin",ios_base::app);
			ofs.write (reinterpret_cast<char*>(&s),sizeof(s));
			ofs.close();
			cout<<"\n\t\t\tRecord Added\n"<<endl;
		}
		else
		{
			cout<<"\n\t\t\tInvalid Marks Entered"<<endl;
			cout<<"Enter Marks Again\n"<<endl;
			goto marks;
		}
	}
}
void search()
{
	system("cls");
	read();
	if(n!=0)
	{
		int rollno;
		cout<<"Enter Roll No. : ";
		cin>>rollno;
		for(i=0;i<n;i++)
		{
			if((s1+i)->rollno == rollno)
			{
				cout<<"Student Roll No. : "<<(s1+i)->rollno<<endl;
				cout<<"Student Name : "<<(s1+i)->name<<endl;
				for(j=0;j<4;j++)
				{
					cout<<"Student Marks of Semester "<<j+1<<" : "<<endl;
					for(k=0;k<6;k++)
					{
						cout<<"Subject "<<k+1<<" : "<<(s1+i)->marks[j][k]<<endl;
					}
				}
				check = 1;
				break;
			}
		}
		if(check != 1)
		{
			cout<<"\a\n\t\t\tRecord Not Found\n"<<endl;
		}
	}
	else
	{
		cout<<"\a\n\t\t\tNo Record Found\n"<<endl;
	}
}
void all()
{
	system("cls");
	read();
	if(n!=0)
	{
		for(i=0;i<n;i++)
		{
			cout<<"Student Roll No. : "<<(s1+i)->rollno<<endl;
			cout<<"Student Name : "<<(s1+i)->name<<endl;
			for(j=0;j<4;j++)
			{
				cout<<"Student Marks of Semester "<<j+1<<" : "<<endl;
				for(k=0;k<6;k++)
				{
					cout<<"Subject "<<k+1<<" : "<<(s1+i)->marks[j][k]<<endl;
				}
			}
			cout<<endl;
		}
	}
	else
	{
		cout<<"\a\n\t\t\tNo Record Found\n"<<endl;
	}
}
void pass()
{
	system("cls");
	read();
	if(n!=0)
	{
		int total[n],per[n];
		for(i=0;i<n;i++)
		{
			total[i]=0;
			for(j=0;j<4;j++)
			{
				for(k=0;k<6;k++)
				{
					total[i]=total[i]+(s1+i)->marks[j][k];
				}
			}
			per[i] = (total[i]*100)/2400;
		
			if(per[i]>=50)
			{
				cout<<"Student Roll No. : "<<(s1+i)->rollno<<endl;
				cout<<"Student Name : "<<(s1+i)->name<<endl;
				for(j=0;j<4;j++)
				{
					cout<<"Student Marks of Semester "<<j+1<<" : "<<endl;
					for(k=0;k<6;k++)
					{
						cout<<"Subject "<<k+1<<" : "<<(s1+i)->marks[j][k]<<endl;
					}
				}
				cout<<"Total Marks : "<<total[i]<<endl;
				check = 1;
			}
		}
		if(check != 1)
		{
			cout<<"\n\t\t\tEvery Student is Fail\n"<<endl;
		}
	}
	else
	{
		cout<<"\a\n\t\t\tNo Record Found\n"<<endl;
	}
}
void fail()
{
	system("cls");
	read();
	if(n!=0)
	{
		int total[n],per[n];
		for(i=0;i<n;i++)
		{
			total[i]=0;
			for(j=0;j<4;j++)
			{
				for(k=0;k<6;k++)
				{
					total[i]=total[i]+(s1+i)->marks[j][k];
				}
			}
			per[i] = (total[i]*100)/2400;
		
			if(per[i]<50)
			{
				cout<<"Student Roll No. : "<<(s1+i)->rollno<<endl;
				cout<<"Student Name : "<<(s1+i)->name<<endl;
				for(j=0;j<4;j++)
				{
					cout<<"Student Marks of Semester "<<j+1<<" : "<<endl;
					for(k=0;k<6;k++)
					{
						cout<<"Subject "<<k+1<<" : "<<(s1+i)->marks[j][k]<<endl;
					}
				}
				cout<<"Total Marks : "<<total[i]<<endl;
				check = 1;
			}
		}
		if(check != 1)
		{
		cout<<"\n\t\t\tEvery Student is Pass\n"<<endl;
		}
	}
	else
	{
		cout<<"\a\n\t\t\tNo Record Found\n"<<endl;
	}
}
void result()
{
	system("cls");
	read();
	if(n!=0)
	{
		int rollno,total[4],final,p[4],per;
		cout<<"Enter Roll No. : ";
		cin>>rollno;
		for(i=0;i<n;i++)
		{
			if((s1+i)->rollno == rollno)
			{
				cout<<"\n\t\t\tStudent Result Card\n"<<endl;
				final = 0;
				cout<<"Student Roll No. : "<<(s1+i)->rollno<<endl;
				cout<<"Student Name : "<<(s1+i)->name<<endl;
				for(j=0;j<4;j++)
				{
					total[j]=0;
					cout<<"\nSemester "<<j+1<<" : "<<endl;
					cout<<endl;
					for(k=0;k<6;k++)
					{
						cout<<"Subject "<<k+1<<" : "<<(s1+i)->marks[j][k]<<endl;
						total[j]=total[j] + (s1+i)->marks[j][k];
					}
					p[j]=(total[j]*100)/600;
					cout<<"\nTotal Semester Marks : "<<total[j]<<"/600"<<endl;
					if(p[j]>=80)
					cout<<"Grade : A"<<endl;
					else if(p[j]>=70)
					cout<<"Grade : B"<<endl;
					else if(p[j]>=60)
					cout<<"Grade : c"<<endl;
					else if(p[j]>=50)
					cout<<"Grade : D"<<endl;
					else
					cout<<"Grade : F"<<endl;
					final = final + total[j];
					cout<<"\n===================================\n"<<endl;
				}
				per = (final*100)/2400;
				cout<<"\nGrand Total : "<<final<<"/2400"<<endl;
				if(per>=80)
				cout<<"Grade : A"<<endl;
				else if(per>=70)
				cout<<"Grade : B"<<endl;
				else if(per>=60)
				cout<<"Grade : c"<<endl;
				else if(per>=50)
				cout<<"Grade : D"<<endl;
				else
				cout<<"Grade : F"<<endl;
				check = 1;
			}
		}
		if(check != 1)
		{
			cout<<"\a\n\t\t\tRecord Not Found"<<endl;
		}	
	}
	else
	{
		cout<<"\a\n\t\t\tNo Record Found\n"<<endl;
	}
}
void modify()
{
	system("cls");
	read();
	if(n!=0)
	{
		int rollno;
		cout<<"\t\t\tModify Data : \n"<<endl;
		cout<<"Enter Roll No. : ";
		cin>>rollno;
		cout<<"\n\t\t\tStudent's Old Record : \n"<<endl;
		cout<<endl;
		for(i=0;i<n;i++)
		{
			if((s1+i)->rollno == rollno)
			{
				cout<<"Student Roll No. : "<<(s1+i)->rollno<<endl;
				cout<<"Student Name : "<<(s1+i)->name<<endl;
				for(j=0;j<4;j++)
				{
					cout<<"Student Marks of Semester "<<j+1<<" : "<<endl;
					for(k=0;k<6;k++)
					{
						cout<<"Subject "<<k+1<<" : "<<(s1+i)->marks[j][k]<<endl;
					}
				}
				check = 1;
				loc=i;
				break;
			}
		}
		if(check==1)
		{
			cout<<endl;
			cout<<"\n\t\t\tEnter New Record : \n"<<endl;
			cout<<"Enter Student Name : ";
			cin>>(s1+loc)->name;
			for(j=0;j<4;j++)
			{
				marks:
				check=0;
				cout<<"Enter Marks of Semester "<<j+1<<" : "<<endl;
				for(k=0;k<6;k++)
				{
					cout<<"Marks in Subject "<<k+1<<" : ";
					cin>>(s1+loc)->marks[j][k];
					if((s1+loc)->marks[j][k]>100||(s1+loc)->marks[j][k]<0)
					{
						check = -1;
						break;
					}
				}
				if(check == -1)
				break;
			}
			if(check != -1)
			{
				ofstream ofs("Student.bin");
				for(i=0;i<n;i++)
				{
					ofs.write(reinterpret_cast<char*>(s1+i),sizeof(s1[i]));
				}
				ofs.close();
				cout<<"\n\t\t\tRecord Modified\n"<<endl;
			}
			else
			{
				cout<<"\n\t\t\tInvalid Marks Entered\n"<<endl;
				cout<<"\nEnter Marks Again\n"<<endl;
				goto marks;
			}
		}
		else
		{
			cout<<"\a\n\t\t\tRecord Not Found\n"<<endl;
		}
	}
	else
	{
		cout<<"\a\n\t\t\tNo Record Found\n"<<endl;
	}
}
void del()
{
	system("cls");
	read();
	if(n!=0)
	{
		int rollno;
		cout<<"\n\t\t\tDelete Data : \n"<<endl;
		cout<<"Enter Roll No. of Student : ";
		cin>>rollno;
		cout<<"Student Record : "<<endl;
		cout<<endl;
		for(i=0;i<n;i++)
		{
			if((s1+i)->rollno == rollno)
			{
				cout<<"Student Roll No. : "<<(s1+i)->rollno<<endl;
				cout<<"Student Name : "<<(s1+i)->name<<endl;
				for(j=0;j<4;j++)
				{
					cout<<"Student Marks of Semester "<<j+1<<" : "<<endl;
					for(k=0;k<6;k++)
					{
						cout<<"Subject "<<k+1<<" : "<<(s1+i)->marks[j][k]<<endl;
					}
				}
				check = 1;
				loc=i;
				break;
			}
		}
		if(check!=1)
		{
			cout<<"\n\t\t\tRecord Not Found\n"<<endl;
		}
		else
		{
			ofstream ofs("Student.bin");
			for(i=0;i<n;i++)
			{
				if(i != loc)
				{
					ofs.write(reinterpret_cast<char*>(s1+i),sizeof(s1[i]));
				}
			}
			ofs.close();
			cout<<"\n\t\t\tRecord Deleted\n"<<endl;
		}
	}
	else
	{
		cout<<"\a\n\t\t\tNo Record Found\n"<<endl;
	}
}
int main()
{
	char ch;
	while(1)
	{
		cout<<"\nPress Any Key To Continue...."<<endl;
		getch();
		system("cls");
		cout<<endl;
		cout<<"Select an option : "<<endl;
		cout<<endl;
		cout<<"1. Add Record"<<endl;
		cout<<"2. Search by Roll No."<<endl;
		cout<<"3. Display All Records"<<endl;
		cout<<"4. Display Pass Students"<<endl;
		cout<<"5. Display Fail Students"<<endl;
		cout<<"6. Display Result Card"<<endl;
		cout<<"7. Modify Record"<<endl;
		cout<<"8. Delete Record"<<endl;
		cout<<"x. Exit"<<endl;
		cout<<"\nEnter Option : ";
		cin>>ch;
		cout<<endl;
		if(ch =='1')
		{
			cout<<endl;
			add();
		}
		else if(ch == '2')
		{
			cout<<endl;
			search();
		}
		else if(ch == '3')
		{
			cout<<endl;
			all();
		}
		else if(ch == '4')
		{
			cout<<endl;
			pass();
		}
		else if(ch == '5')
		{
			cout<<endl;
			fail();
		}
		else if(ch == '6')
		{
			cout<<endl;
			result();
		}
		else if(ch == '7')
		{
			cout<<endl;
			modify();
		}
		else if(ch == '8')
		{
			cout<<endl;
			del();
		}
		else if(ch == 'x')
		{
			break;
		}
		else
		{
			cout<<"\t\t\tYou Entered an Invalid Option."<<endl;
		}
	}
	getch();
	return 0;
}
