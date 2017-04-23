/*Write a program with two encapsulated classes StudentBS (rollnoBS, marksBSSubject1, marksBSSubject2)
and StudentMS (rollnoMS, marksMSSubject1, marksMSSubject2) with functions to input, print and return 
their data members. The StudentMS class should be child of StudentBS to inherit data and for reusability
of code. In main function, write code to input 100 StudentMS objects using pointer notation and display
the Students' merit according to the following criteria:
		Merit = 30% of total of BS marks + 70% of total of MS marks*/
		
//I used N instead of 100
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class StudentBS
{
	int rollnoBS;
	float marksBSSubject1;
	float marksBSSubject2;
	public:
		StudentBS()
		{
			rollnoBS = 0;
			marksBSSubject1 = 0;
			marksBSSubject2 = 0;
		}
		StudentBS(int rollnoBS,float marksBSSubject1,float marksBSSubject2)
		{
			setData(rollnoBS,marksBSSubject1,marksBSSubject2);
		}
		void inputData()
		{
			cout<<"Enter Student BS Roll No. : ";
			cin>>rollnoBS;
			cout<<"Enter Marks of BS Subject 1 : ";
			cin>>marksBSSubject1;
			cout<<"Enter Marks of BS Subject 2 : ";
			cin>>marksBSSubject2;
		}
		void printData()
		{
			cout<<"\nStudent BS Roll No. : "<<rollnoBS<<endl;
			cout<<"Marks of BS Subjetc 1 : "<<marksBSSubject1<<endl;
			cout<<"Marks of BS Subjetc 2 : "<<marksBSSubject2<<endl;
		}
		void setData(int rollnoBS,float marksBSSubject1,float marksBSSubject2)
		{
			this->rollnoBS = rollnoBS;
			this->marksBSSubject1 = marksBSSubject1;
			this->marksBSSubject2 = marksBSSubject2;
		}
		int getRollnoBS()
		{
			return rollnoBS;
		}
		float getMarksBSSubject1()
		{
			return marksBSSubject1;
		}
		float getMarksBSSubject2()
		{
			return marksBSSubject2;
		}
};
class StudentMS : public StudentBS
{
	int rollnoMS;
	float marksMSSubject1;
	float marksMSSubject2;
	public:
		StudentMS()
		{
			rollnoMS = 0;
			marksMSSubject1 = 0;
			marksMSSubject2 = 0;
		}
		StudentMS(int rollnoBS,float marksBSSubject1,float marksBSSubject2,int rollnoMS,float marksMSSubject1,float marksMSSubject2) : StudentBS(rollnoBS,marksBSSubject1,marksBSSubject2)
		{
			this->rollnoMS = rollnoMS;
			this->marksMSSubject1 = marksMSSubject1;
			this->marksMSSubject2 = marksMSSubject2;
		}
		void inputData()
		{
			StudentBS :: inputData();
			cout<<"Enter Student MS Roll No. : ";
			cin>>rollnoMS;
			cout<<"Enter Marks of MS Subject 1 : ";
			cin>>marksMSSubject1;
			cout<<"Enter Marks of MS Subject 2 : ";
			cin>>marksMSSubject2;
		}
		void printData()
		{
			StudentBS :: printData();
			cout<<"\nStudent MS Roll No. : "<<rollnoMS<<endl;
			cout<<"Marks of MS Subjetc 1 : "<<marksMSSubject1<<endl;
			cout<<"Marks of MS Subjetc 2 : "<<marksMSSubject2<<endl;
		}
		void setData(int rollnoBS,float marksBSSubject1,float marksBSSubject2,int rollnoMS,float marksMSSubject1,float marksMSSubject2)
		{
			StudentBS :: setData(rollnoBS,marksBSSubject1,marksBSSubject2);
			this->rollnoMS = rollnoMS;
			this->marksMSSubject1 = marksMSSubject1;
			this->marksMSSubject2 = marksMSSubject2;
		}
		int getRollnoMS()
		{
			return rollnoMS;
		}
		float getMarksMSSubject1()
		{
			return marksMSSubject1;
		}
		float getMarksMSSubject2()
		{
			return marksMSSubject2;
		}
};
int main()
{
	int N,i=0;
	cout<<"Enter Number of Students : ";
	cin>>N;
	
	StudentMS *sm = new StudentMS[N];
	for(i=0;i<N;i++)
	{
		(sm+i)->inputData();
	}
	float btotal,mtotal,merit;
	for(i=0;i<N;i++)
	{
		btotal = (sm+i)->getMarksBSSubject1() + (sm+i)->getMarksBSSubject2();
		mtotal = (sm+i)->getMarksMSSubject1() + (sm+i)->getMarksMSSubject2(); 
		merit = (30*btotal + 70*mtotal)/100;
		(sm+i)->printData();
		cout<<"Student Merit : "<<merit<<endl;
	}
	
	getch();
	return 0;
}
