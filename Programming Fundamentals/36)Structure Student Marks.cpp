#include<iostream>
using namespace std;
#include<conio.h>
struct student
{
	int rollno;
	int marks[6];
};
int main()
{
	int n=10;
	student s[n];
	int i=0, j=0, total[n], large=0, loc=0;
	
	for(i=0; i<n; i++)
	{
		total[i] = 0;
		cout<<"Enter Student Roll No. : ";
		cin>>s[i].rollno;
		for(j=0; j<6; j++)
		{
			cout<<"Marks of Subject "<<j+1<<" = ";
			cin>>s[i].marks[j];
			
			total[i]= total[i]+ s[i].marks[j];
		}
		cout<<"Total Marks = "<<total[i]<<endl;
		cout<<endl;
	}
	cout<<endl;
	
	for(i=0; i<n; i++)
	{
		if(total[i]>large)
		large = total[i];
		loc = i;
	}
	
	cout<<"Details of the Student having highest total marks :"<<endl;
	cout<<endl;
	cout<<"Student Roll No. : "<<s[loc].rollno<<endl;
	for(j=0; j<6; j++)
	{
		cout<<"Marks of Subject"<<j+1<<" = "<<s[loc].marks[j]<<endl;
	}
	cout<<"Total Marks = "<<large;
	
	getch();
	return 0;
	
}
