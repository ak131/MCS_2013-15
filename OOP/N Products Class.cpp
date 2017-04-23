/*Write a program with an encapsulated class Product (Pid, Pdescription, Units, PricePerUnit)
with functions to input, print and return data members. In main function, write code to input
N Product objects and use pointer notation to display Product data with the highest value in 
the stock among the Products having the number of units more than 100.*/
#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class Product
{
	int Pid;
	char Pdes[50];
	int units;
	float price;
	public:
		Product()
		{
			Pid = 0;
			strcpy(Pdes,"");
			units = 0;
			price = 0;
		}
		Product(int Pid,char*Pdes,int units,float price)
		{
			setData(Pid,Pdes,units,price);
		}
		void inputData()
		{
			cout<<"Enter Product Id : ";
			cin>>Pid;
			cout<<"Enter Product Description : ";
			cin>>Pdes;
			cout<<"Enter Units : ";
			cin>>units;
			cout<<"Enter Price per Unit : ";
			cin>>price;
		}
		void printData()
		{
			cout<<"\nProduct ID : "<<Pid<<endl;
			cout<<"Product Description : "<<Pdes<<endl;
			cout<<"Units : "<<units<<endl;
			cout<<"Price per Unit : "<<price<<endl;
		}
		void setData(int Pid,char*Pdes,int units,float price)
		{
			this->Pid = Pid;
			strcpy(this->Pdes,Pdes);
			this->units = units;
			this->price = price;
		}
		int getPid()
		{
			return Pid;
		}
		char *getPdescription()
		{
			return Pdes;
		}
		int getUnits()
		{
			return units;
		}
		float getPrice()
		{
			return price;
		}
};
int main()
{
	int N,i=0;
	cout<<"Enter Number of Product : ";
	cin>>N;
	
	Product *p = new Product[N];
	for(i=0;i<N;i++)
	{
		(p+i)->inputData();
	}
	int u,loc=-1;
	float value,high=0;
	for(i=0;i<N;i++)
	{
		u = (p+i)->getUnits();
		value = u * (p+i)->getPrice();
		if(u>100)
		{
			if(value>high)
			{
				high = value;
				loc = i;
			}
			
		}
	}
	if(loc == -1)
	{
		cout<<"\nNo product have more than 100 units"<<endl;
	}
	else
	{
		cout<<"\nRequired Result : "<<endl;
		(p+loc)->printData();
		cout<<"Product Value : "<<high<<endl;
	}
	
	getch();
	return 0;
}
