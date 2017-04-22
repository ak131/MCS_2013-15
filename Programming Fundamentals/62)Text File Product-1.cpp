#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
struct Product
{
	int pid;
	char name[20];
	int qty;
	float price;
};
int main()
{
	Product p;
	int i;
	ofstream ofs("Product.txt");
	for(i=0;i<10;i++)
	{
		cout<<"Product ID = ";
		cin>>p.pid;
		cout<<"Product Name = ";
		cin>>p.name;
		cout<<"Quantity = ";
		cin>>p.qty;
		cout<<"Price per Unit = ";
		cin>>p.price;
		cout<<endl;
		
		ofs<<p.pid<<endl;
		ofs<<p.name<<endl;
		ofs<<p.qty<<endl;
		ofs<<p.price<<endl;
	}
	ofs.close();
	
	getch();
	return 0;
}
