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
	Product *p=new Product[10];
	int i;
	ifstream ifs("Product.txt");
	for(i=0;i<10;i++)
	{
		ifs>>(p+i)->pid;
		ifs>>(p+i)->name;
		ifs>>(p+i)->qty;
		ifs>>(p+i)->price;
	}
	ifs.close();
	float value[10],max=0;
	int loc=0;
	for(i=0;i<10;i++)
	{
		value[i]=(p+i)->qty*(p+i)->price;
		if(value[i]>max)
		{
			max = value[i];
			loc = i;
		}
	}
	cout<<"Details of The Product with Highest Value : "<<endl;
	cout<<"\nProduct ID = "<<(p+loc)->pid<<endl;
	cout<<"Product Name = "<<(p+loc)->name<<endl;
	cout<<"Quantity = "<<(p+loc)->qty<<endl;
	cout<<"Price per Unit = "<<(p+loc)->price<<endl;
	cout<<"Total Value = "<<value[loc]<<endl;
	
	getch();
	return 0;
}
