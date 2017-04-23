#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class A
{
	int i;
	int j;
	char s[100];
	public:
		void inputData()
		{
			cout<<"Enter i : ";
			cin>>i;
			cout<<"Enter j : ";
			cin>>j;
			cout<<"Enter s : ";
			cin>>s;
			
		}
		void printData()
		{
			cout<<"\ni = "<<i<<endl;
			cout<<"j = "<<j<<endl;
			cout<<"s = "<<s<<endl;
		}
		int getI()
		{
			return i;
		}
		int getJ()
		{
			return j;
		}
		char *getS()
		{
			return s;
		}
		void setData(int i1,int j1,char *s1)
		{
			i = i1;
			j = j1;
			strcpy(s,s1);
		}
		void setI(int i1)
		{
			i = i1;
		}
		void setJ(int j1)
		{
			j = j1;
		}
		void setS(char *s1)
		{
			strcpy(s,s1);
		}
};
int main()
{
	A a;
	a.inputData();
	a.printData();
	
	cout<<"\ni = "<<a.getI()<<endl;
	
	a.setData(42,52,"QWERTY");
	a.printData();
	a.setI(50);
	a.printData();
	
	getch();
	return 0;
}
