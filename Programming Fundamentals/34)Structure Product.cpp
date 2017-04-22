#include<iostream>
using namespace std;
#include<conio.h>
struct product
{
	int pid;
	int qty;
	int price;
};
int main()
{
	product p[10];
	int i, large = 0, loc = 0;
	
	for(i=0; i<10; i++)
	{
		cout<<"Enter the product ID : ";
		cin>>p[i].pid;
		cout<<"Enter quantity : ";
		cin>>p[i].qty;
		cout<<"Enter Price per Unit : ";
		cin>>p[i].price;
		cout<<endl;
	}
	
	for(i=0; i<10; i++)
	{
		if(p[i].qty>large)
		{
			large = p[i].qty;
			loc = i;
		}
	}
	cout<<"Details of Product with highest quantity :"<<endl;
	cout<<endl;
	cout<<"Product ID = "<<p[loc].pid<<endl;
	cout<<"Product Quantity = "<<p[loc].qty<<endl;
	cout<<"Price per Unit = "<<p[loc].price<<endl;
	
	getch();
	return 0;
	
	
}
