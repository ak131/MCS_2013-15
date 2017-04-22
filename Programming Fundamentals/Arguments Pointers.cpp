#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
int i=0,j=0,k=0,n;
struct Student
{
	int rollno;
	char name[30];
	int marks;
};
void f(Student*s)
{
	s = new Student[n];
	ofstream ofs("A.txt");
	for(i=0;i<n;i++)
	{
		cout<<"Roll No. : ";
		cin>>(s+i)->rollno;
		cout<<"Name : ";
		cin>>(s+i)->name;
		cout<<"Marks : ";
		cin>>(s+i)->marks;
		
		ofs<<(s+i)->rollno<<endl;
		ofs<<(s+i)->name<<endl;
		ofs<<(s+i)->marks<<endl;
	}
	ofs.close();
}
int main()
{
	cout<<"n = ";
	cin>>n;
	Student *s1;
	f(s1);
	
	
	getch();
	return 0;
}			
