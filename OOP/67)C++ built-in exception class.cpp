//C++ bulit-in exception class

#include<iostream>
using namespace std;
#include<conio.h>
#include<exception>
#include<new>
int main()
{
	try{
		float *f;
		f = new float[99999999999999999];
		//Code using f
	}catch(bad_alloc & b)
	{
		cout<<b.what()<<endl;
	}
	cout<<"Program Completed"<<endl;
	
	getch();
	return 0;
}
