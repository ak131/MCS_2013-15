#include<iostream>
using namespace std;
#include<conio.h>
class A
{
      int i;
      public:
      A()
      {
          i=10;
      }
      //friend int operator + (int i, const A &a);
    int operator + (int i, const A &a)
	{
    	return i+a.i;
	}
};

int main()
{
    int k=5;
    A a;
    int l=k+a;  
    cout<<"l= "<<l;
    
    getch();
    return 0;
}
