#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
struct Product
{
	int id;
	char name[20];
	int qty;
	float price;
};
int i;
void write()
{
	cout<<"\nWrite Details of 10 Products on File : "<<endl;
	Product p;
	ofstream ofs("Product.bin");
	for(i=0;i<10;i++)
	{
		cout<<"\nProduct ID : ";
		cin>>p.id;
		cout<<"Product Name : ";
		cin>>p.name;
		cout<<"Quantity : ";
		cin>>p.qty;
		cout<<"Price per Unit :";
		cin>>p.price;
		
		ofs.write (reinterpret_cast<char*>(&p),sizeof(p));
	}
	ofs.close();
}
void read()
{
	cout<<"\nDetails of 10 Products on File : "<<endl;
	Product *p=new Product[10];
	ifstream ifs("Product.bin");
	for(i=0;i<10;i++)
	{
		ifs.read (reinterpret_cast<char*>(p+i),sizeof(p[i]));
	}
	ifs.close();
	for(i=0;i<10;i++)
	{
		cout<<"\nProduct ID : "<<(p+i)->id<<endl;
		cout<<"Product Name : "<<(p+i)->name<<endl;
		cout<<"Product Quantity : "<<(p+i)->qty<<endl;
		cout<<"Price per Unit : "<<(p+i)->price<<endl;
		cout<<endl;
	}
}
void hvalue()
{
	cout<<"\nDetails of Product of Highest Value : "<<endl;
	Product *p=new Product[10];
	ifstream ifs("Product.bin");
	for(i=0;i<10;i++)
	{
		ifs.read (reinterpret_cast<char*>(p+i),sizeof(p[i]));
	}
	ifs.close();
	float value,large=0;
	int loc = 0;
	for(i=0;i<10;i++)
	{
		value = (p+i)->qty*(p+i)->price;
		if(value > large)
		{
			large = value;
			loc = i;
		}
	}
	cout<<endl;
	cout<<"Product ID : "<<(p+loc)->id<<endl;
	cout<<"Product Name : "<<(p+loc)->name<<endl;
	cout<<"Quantity : "<<(p+loc)->qty<<endl;
	cout<<"Price per Unit : "<<(p+loc)->price<<endl;
	cout<<"Product Value : "<<large<<endl;
	cout<<endl;
}
void hqty()
{
	cout<<"\nDetails of Product of Highest Quantity : "<<endl;
	cout<<endl;
	Product *p=new Product[10];
	ifstream ifs("Product.bin");
	for(i=0;i<10;i++)
	{
		ifs.read (reinterpret_cast<char*>(p+i),sizeof(p[i]));
	}
	ifs.close();
	int large=0,loc=0;
	for(i=0;i<10;i++)
	{
		if((p+i)->qty>large)
		{
			large = (p+i)->qty;
			loc = i;
		}
	}
	cout<<endl;
	cout<<"Product ID : "<<(p+loc)->id<<endl;
	cout<<"Product Name : "<<(p+loc)->name<<endl;
	cout<<"Quantity : "<<(p+loc)->qty<<endl;
	cout<<"Price per Unit : "<<(p+loc)->price<<endl;
	cout<<endl;
}
int main()
{
	char ch;
	while(1)
	{
	cout<<"Select an option : "<<endl;
	cout<<"1. Write Product details on file"<<endl;
	cout<<"2. Read Product details from file"<<endl;
	cout<<"3. Details of Product of Highest Value"<<endl;
	cout<<"4. Details of Product of Highest Quantity"<<endl;
	cout<<"x. Exit"<<endl;
	cout<<endl;
	cin>>ch;
	if(ch == '1')
	{
		cout<<endl;
		write();
	}
	else if(ch == '2')
	{
		cout<<endl;
		read();
	}
	else if(ch == '3')
	{
		cout<<endl;
		hvalue();
	}
	else if(ch == '4')
	{
		cout<<endl;
		hqty();
	}
	else if(ch == 'x')
	{
		break;
	}
	else
	{
		cout<<endl;
		cout<<"Invalid Option "<<endl;
	}

	}
	
	getch();
	return 0;
}
