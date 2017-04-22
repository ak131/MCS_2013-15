#include<iostream>
using namespace std;
#include<conio.h>
struct product
{
	int Pid;
	char Pname[20];
	int qty;
	float price;
};
int main()
{
	product *p;
	p = new product[10];
	
	int i=0;
	for(i=0;i<10;i++)
	{
		cout<<"Enter Product Id : ";
		cin>>(p+i)->Pid;
		cout<<"Enter Product Name : ";
		cin>>(p+i)->Pname;
		cout<<"Enter Quantity : ";
		cin>>(p+i)->qty;
		cout<<"Price per Unit : ";
		cin>>(p+i)->price;
	}
	cout<<endl;
	cout<<"Details of Every Product"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<"Product Id : "<<(p+i)->Pid<<endl;
		cout<<"Product Name : "<<(p+i)->Pname<<endl;
		cout<<"Quantity : "<<(p+i)->qty<<endl;
		cout<<"Price per Unit : "<<(p+i)->price<<endl;
	}
	cout<<endl;
	
	int large=0,loc=0;
	for(i=0;i<10;i++)
	{
		if((p+i)->qty > large)
		{
			large = (p+i)->qty;
			loc = i;
		}
	}
	
	cout<<"Details of product with highest quantity:"<<endl;
	
	cout<<"\nProduct Id = "<<(p+loc)->Pid<<endl;
	cout<<"Product Name = "<<(p+loc)->Pname<<endl;;
	cout<<"Product Quantity = "<<(p+loc)->qty<<endl;
	cout<<"Price per Unit = "<<(p+loc)->price<<endl;
	getch();
	return 0;
}
