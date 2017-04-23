#include<iostream>
using namespace std;
#include<conio.h>
class Animal
{
	public:
		virtual void sleep()
		{
			cout<<"Sleep of animal called"<<endl;
		}
};
class Fish : public Animal
{
	public:
		void sleep()
		{
			cout<<"Sleep of fish called"<<endl;
		}
};
int main()
{
	Animal a;
	Fish f;
	Animal *a1;
	a1 = &a;
	a1->sleep();
	a1 = &f;
	a1->sleep();
	getch();
	return 0;
}
