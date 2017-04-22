#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	//Switch Statement
	int i;
	
	cout<<"Give i ";
	cin>>i;
	
	switch(i)
	{
	case 1:
		cout<<"\nOne"<<endl;
		break;
	case 2:
		cout<<"\nTwo"<<endl;
		break;
	case 3:
		cout<<"\nThree"<<endl;
		break;
	default:
		cout<<"\nInvalid"<<endl;
	}
	
	getch();
	return 0;
}
