#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
struct Product
{
	int pid;
	char pdes[20];
	int qty;
	float price;
};
int main()
{
	int N,i;
	cout<<"Enter Number of Products: ";
	cin>>N;
	Product p[N];
	cout<<"Enter Product Details: "<<endl;
	for(i=0;i<N;i++)
	{
		cout<<"Product ID = ";
		cin>>p[i].pid;
		cout<<"Product Description = ";
	    cin>>p[i].pdes;
		cout<<"Product Quantity = ";
		cin>>p[i].qty;
		cout<<"Price per Unit = ";
		cin>>p[i].price;
		cout<<endl;
	}
	
	Product p1[N];
	int j=0;
	for(i=0;i<N;i++)
	{
		if(p[i].qty>100)
		{
			p1[j].pid = p[i].pid;
			strcpy(p1[j].pdes,p[i].pdes);
			p1[j].qty = p[i].qty;
			p1[j].price = p[i].price;
			
			j++;
		}
	}
	switch (j)
		{
			case 0:
			
			cout<<"No product have more than 100 units";
			break;
			
			default:
			int value, loc = 0, large;
			large = (p1[0].qty)*(p1[0].price);
			for(i=0;i<=j;i++)
			{
			value = (p1[i].qty)*(p1[i].price);
			if(value>large)
			{
			large = value;
			loc = i;
			}
			}
			cout<<"Details of Product having highest value : "<<endl;
			cout<<"Product ID = "<<p1[loc].pid<<endl;
			cout<<"Product Description = "<<p1[loc].pdes<<endl;
			cout<<"Product Quantity = "<<p1[loc].qty<<endl;
			cout<<"Price per Unit = "<<p1[loc].price<<endl;
			cout<<"Product Value = "<<large<<endl;
		}
		getch();
		return 0;
}
