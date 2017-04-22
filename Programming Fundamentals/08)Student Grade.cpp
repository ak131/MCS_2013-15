#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int marks;
	
	cout<<"Enter the marks of  the student ";
	cin>>marks;
	
	if((marks<=100)&&(marks>0))
	{
	if ((marks>=80)&&(marks<=100))
	cout<<"Student grade is A"<<endl;
	
	else if ((marks>=70)&&(marks<=79))
	cout<<"Student grade is B"<<endl;
	
	else if ((marks>=60)&&(marks<=69))
	cout<<"Student grade is C"<<endl;
	
	else if ((marks>=50)&&(marks<=59))
	cout<<"Student grade is D"<<endl;
	
	else if (marks<50)
	cout<<"Student grade is F"<<endl;
	}
	
	else
	cout<<"Invalid Marks"<<endl;
	
	getch ();
	return 0;
}
