#include<iostream>
using namespace std;
#include<conio.h>
struct student
{
	int rollno;
	int marks;
};
int main()
{
	student s[10];
	int i=0, large=0, loc=0;
	
	for(i=0; i<10; i++)
	{
		cout<<"Enter Student Roll No. : ";
		cin>>s[i].rollno;
		cout<<"Enter Student Marks : ";
		cin>>s[i].marks;
		cout<<endl;
	}
	
	for(i=0; i<10; i++)
	{
		if(s[i].marks > large)
		{
			large = s[i].marks;
			loc = i;
		}
	}
	cout<<"Details of Student having highest marks : "<<endl;
	cout<<endl;
	cout<<"Student Roll No. : "<<s[loc].rollno<<endl;
	cout<<"Student Marks : "<<s[loc].marks<<endl;
	
	getch();
	return 0;
}
