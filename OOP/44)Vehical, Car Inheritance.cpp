#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
class Vehical
{
	int vid;
	int color;
	public:
		Vehical()
		{
			vid = 0;
			color = 0;
		}
		Vehical(int vid,int color)
		{
			setData(vid,color);
		}
		void inputData()
		{
			cout<<"Enter Vehical ID : ";
			cin>>vid;
			cout<<"Enter Color : ";
			cin>>color;
		}
		void printData()
		{
			cout<<"\nVehical ID : "<<vid<<endl;
			cout<<"Color : "<<color<<endl;
		}
		void setData(int vid,int color)
		{
			this->vid = vid;
			this->color = color;
		}
		int getVid()
		{
			return vid;
		}
		int getColor()
		{
			return color;
		}
};
class Car : public Vehical
{
	int carid;
	char model[20];
	public:
		Car()
		{
			carid = 0;
			strcpy(model,"");
		}
		Car(int vid,int color,int carid,char* model) : Vehical(vid,color)
		{
			this->carid = carid;
			strcpy(this->model,model);
		}
		void inputData()
		{
			Vehical :: inputData();
			cout<<"Enter Car ID : ";
			cin>>carid;
			cout<<"Enter Model : ";
			cin>>model;
		}
		void printData()
		{
			Vehical :: printData();
			cout<<"Car ID : "<<carid<<endl;
			cout<<"Model : "<<model<<endl;
		}
		void setData(int vid,int color,int carid,char* model)
		{
			Vehical :: setData(vid,color);
			this->carid = carid;
			strcpy(this->model,model);
		}
		int getCarid()
		{
			return carid;
		}
		char* getModel()
		{
			return model;
		}
};
int main()
{
	Car *c=new Car[10];
	int i;
	for(i=0;i<10;i++)
	{
		c[i].inputData();
	}
	int check=-1;
	for(i=0;i<10;i++)
	{
		if(c[i].getCarid()>50 && c[i].getColor()==2)
		{
			c[i].printData();
			check =0;
		}
	}
	if(check == -1)
	{
		cout<<"No Required Data Found"<<endl;
	}
	getch();
	return 0;
}
