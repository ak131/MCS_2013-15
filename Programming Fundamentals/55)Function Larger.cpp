#include<iostream>
using namespace std;
#include<conio.h>
int f(int a, int b)
{
	int l;
	if(a>=b)
	l = a;
	else
	l = b;
	
	return l;
}
int main()
{
	int a,b,c,d,e;
	cout<<"Enter Five Integers : "<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>e;
	cout<<endl;
	int l;
	l = f(a,b);
	l = f(l,c);
	l = f(l,d);
	l = f(l,e);
	cout<<"Largest number = "<<l;
	
	getch();
	return 0;
	
}
