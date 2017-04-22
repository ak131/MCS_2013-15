#include<iostream>
using namespace std;
#include<conio.h>
#include<fstream>
#include<cstdlib>
int loc=0,ploc=0,sloc=0,check;
int i=0,j=0,k=0;
int n1,n2,n3,stock;
struct Product
{
	int id;
	char name[30];
	int qty;
};
Product p,*p1=new Product[n1];
struct Purchases
{
	int pid;
	int id;
	int pqty;
	float pprice;
};
Purchases pur,*pur1=new Purchases[n2];
struct Sales
{
	int sid;
	int id;
	int sqty;
	float sprice;
};
Sales s,*s1=new Sales[n2];
void read()
{
	i=n1=check=loc=0;
	if(ifstream("Product.bin"))
	{
		ifstream ifs1("Product.bin");
		while(ifs1.read(reinterpret_cast<char*>(p1+i),sizeof(p1[i])))
		{
			i++;
		}
		ifs1.close();
		n1 = i;
	}
}
void readp()
{
	j=n2=check=ploc=0;
	if(ifstream("Purchases.bin"))
	{
		ifstream ifs2("Purchases.bin");
		while(ifs2.read(reinterpret_cast<char*>(pur1+j),sizeof(pur1[j])))
		{
			j++;
		}
		ifs2.close();
		n2 = j;
	}
}
void reads()
{
	k=n3=check=sloc=0;
	if(ifstream("Sales.bin"))
	{
		ifstream ifs3("Sales.bin");
		while(ifs3.read(reinterpret_cast<char*>(s1+k),sizeof(s1[k])))
		{
			k++;
		}
		ifs3.close();
		n3 = k;
	}
}
void add()
{
	system("cls");
	cout<<"\n\t\t\tEnter New Product\n"<<endl;	
	cout<<"Product ID : ";
	cin>>p.id;
	read();
	for(i=0;i<n1;i++)
	{
		if(p.id == (p1+i)->id)
		{
			check = -1;
			break;
		}
	}
	if(check == -1)
	{
		cout<<"\n\t\t\tSame ID Detected\n"<<endl;
	}
	else
	{
		cout<<"Product Name : ";
		cin>>p.name;
		p.qty = 0;
		ofstream ofs("Product.bin",ios_base::app);
		ofs.write(reinterpret_cast<char*>(&p),sizeof(p));
		ofs.close();
		cout<<"\nProduct Added\n"<<endl;
	}

}
void showall()
{
	system("cls");
	read();
	if(n1!=0)
	{
		for(i=0;i<n1;i++)
		{
			cout<<"\nProduct ID  : "<<(p1+i)->id<<endl;
			cout<<"Product Name : "<<(p1+i)->name<<endl;
		}
	}
	else
	{
		cout<<"\n\t\t\tNo Product Found\n"<<endl;
	}
}
void addpur()
{
	system("cls");
	read();	
	if(n1!=0)
	{		
		readp();
		cout<<"Purchase ID : ";
		cin>>pur.pid;
		for(i=0;i<n2;i++)
		{
			if(pur.pid == (pur1+i)->pid)
			{
				check = -1;
				break;
			}
		}
		if(check == -1)
		{
			cout<<"\n\t\t\tYou Can Not Use Same Purchase ID Twice\n"<<endl;
		}
		else
		{
			cout<<"Product ID : ";
			cin>>pur.id;
			for(i=0;i<n1;i++)
			{
				if((p1+i)->id == pur.id)
				{
					cout<<"Product Name : "<<(p1+i)->name<<endl;
					check = 1;
					loc = i;
					break;
				}
			}
			if(check != 1)
			{
				cout<<"\n\t\t\t\aYou Can Not Purchase This Product\n"<<endl;
			}
			else
			{
				cout<<"Quantity Purchased : ";
				cin>>pur.pqty;
				(p1+loc)->qty = (p1+loc)->qty + pur.pqty;
				cout<<"Price per Unit : ";
				cin>>pur.pprice;
				ofstream ofs1("Product.bin");
				ofs1.seekp(0,ios::beg);
				for(i=0;i<n1;i++)
				{
					ofs1.write(reinterpret_cast<char*>(p1+i),sizeof(p1[i]));
				}
				ofs1.close();
				ofstream ofs2("Purchases.bin",ios_base::app);
				ofs2.write(reinterpret_cast<char*>(&pur),sizeof(pur));
				ofs2.close();
				cout<<"\n\t\t\tProduct Purchased and Stock Updated\n"<<endl;
			}
		}
	
	}
	else
	{
		cout<<"\n\t\t\tYou Can Not Purchase Any Product\n"<<endl;
	}
}
void addsales()
{
	system("cls");
	read();	
	if(n1!=0)
	{
		reads();
		cout<<"Sales ID : ";
		cin>>s.sid;
		for(i=0;i<n3;i++)
		{
			if(s.sid == (s1+i)->sid)
			{
				sloc = -1;
				break;
			}
		}
		if(sloc == -1)
		{
			cout<<"\n\t\t\tYou Can Not Use The Same Sales ID Twice\n"<<endl;
		}
		else
		{
			cout<<"Product ID : ";
			cin>>s.id;
			for(i=0;i<n1;i++)
			{
				if(s.id == (p1+i)->id)
				{
					cout<<"Product Name : "<<(p1+i)->name<<endl;
					loc = i;
					check = 1;
				break;
				}
			}
			if(check != 1)
			{
				cout<<"\n\t\t\tYou Don't Have This Product in Stock\n"<<endl;	
			}
			else
			{
				cout<<"Sold Quantity : ";
				cin>>s.sqty;
				stock = (p1+loc)->qty - s.sqty;
				cout<<"Price per Unit : ";
				cin>>s.sprice;
				if(stock < 0)
				{
					cout<<"\n\t\t\tYou Don't Have Enough Stock of This Product\n"<<endl;
				}
				else
				{
					(p1+loc)->qty = stock;
					ofstream ofs1("Product.bin");
					ofs1.seekp(0,ios::beg);
					for(i=0;i<n1;i++)
					{
						ofs1.write(reinterpret_cast<char*>(p1+i),sizeof(p1[i]));
					}
					ofs1.close();
							
					ofstream ofs3("Sales.bin",ios_base::app);
					ofs3.write(reinterpret_cast<char*>(&s),sizeof(s));
					ofs3.close();
					cout<<"\n\t\t\tProduct Sold\n"<<endl;
				}
			}
		}
	}
	else
	{
		cout<<"\a\n\t\t\tYou have no Product for Sale\n"<<endl;
	}
}
void stockinfo()
{
	system("cls");
	if(ifstream("Product.bin"))
	{
		read();
		int id;
		cout<<"Enter Product ID : ";
		cin>>id;
		for(i=0;i<n1;i++)
		{
			if(id == (p1+i)->id)
			{
				cout<<"\nProduct ID : "<<(p1+i)->id<<endl;
				cout<<"Product Name : "<<(p1+i)->name<<endl;
				cout<<"Quantity in Stock : "<<(p1+i)->qty<<endl;
				check = 1;
			}
		}
		if(check != 1)
		{
			cout<<"\n\t\t\tNo Product with ID "<<id<<" is Detected."<<endl;
		}
	}
	else
	{
		cout<<"\n\t\t\tNo Record Found\n"<<endl;
	}
}
void showp()
{
	system("cls");
	readp();
	if(n2!=0)
	{	
		for(j=0;j<n2;j++)
		{
			cout<<"Purchase ID : "<<(pur1+j)->pid<<endl;
			cout<<"Product ID : "<<(pur1+j)->id<<endl;
			cout<<"Quantity Purchased : "<<(pur1+j)->pqty<<endl;
			cout<<"Price per Unit : "<<(pur1+j)->pprice<<endl;
			cout<<endl;
		}
	}
	else
	{
		cout<<"\n\t\t\tNo Purchased Product Found\n"<<endl;
	}
}
void shows()
{
	system("cls");
	reads();
	if(n3!=0)
	{	
		for(k=0;k<n3;k++)
		{
			cout<<"Sales ID : "<<(s1+k)->sid<<endl;
			cout<<"Product ID : "<<(s1+k)->id<<endl;
			cout<<"Quantity Sold : "<<(s1+k)->sqty<<endl;
			cout<<"Price per Unit : "<<(s1+k)->sprice<<endl;
			cout<<endl;
		}
	}
	else
	{
		cout<<"\n\t\t\tNo Sold Product Found\n"<<endl;
	}
}
void del()
{
	system("cls");
	read();
	if(n1!=0)
	{
		int id; 
		cout<<"Enter Product ID : ";
		cin>>id;
		for(i=0;i<n1;i++)
		{
			if(id == (p1+i)->id)
			{
				loc = i;
				check = 1;
				break;
			}
		}
		if(check != 1)
		{
			cout<<"\n\t\t\tNo Product with ID "<<id<<" is Detected."<<endl;
		}
		else
		{
			if(ifstream("Purchases.bin"))
			{
				readp();
				j=0;
				while(j<n2)
				{
					if(id == (pur1+j)->id)
					{
						ploc = j;
						check = 2;
					}
					if(check == 2)
					{
						ofstream ofs2("Purchases.bin");
						for(k=0;k<n2;k++)
						{
							if(k != ploc)
							{
								ofs2.write(reinterpret_cast<char*>(pur1+k),sizeof(pur1[k]));
							}
						}
						ofs2.close();
						readp();
						j=0;
					}
					else
					j++;
				}
			}
			if(ifstream("Sales.bin"))
			{
				reads();
				j=0;
				while(j<n3)
				{
					check=0;
					if(id == (s1+j)->id)
					{
						sloc = j;
						check =3;
					}
					if(check == 3)
					{
						ofstream ofs3("Sales.bin");
						for(k=0;k<n3;k++)
						{
							if(k != sloc)
							{
								ofs3.write(reinterpret_cast<char*>(s1+k),sizeof(s1[k]));
							}
						}
						ofs3.close();
						reads();
						j=0;
					}
					else
					j++;
				}
			}
			ofstream ofs1("Product.bin");
			for(i=0;i<n1;i++)
			{
				if(i != loc)
				{
					ofs1.write(reinterpret_cast<char*>(p1+i),sizeof(p1[i]));
				}
			}
			ofs1.close();
			cout<<"\n\t\t\tProduct Deleted\n"<<endl;
			
		}
	}
	else
	{
		cout<<"\n\t\t\tNo Record Found\n"<<endl;
	}
}
int main()
{
	char ch;
	while(1)
	{
		cout<<"Press Any Key to Continue.....\n"<<endl;
		getch();
		system("cls");
		cout<<"\nSelect an Option : "<<endl;
		cout<<endl;
		cout<<"1. Add Product "<<endl;
		cout<<"2. Show All Products "<<endl;
		cout<<"3. Purchase Product "<<endl;
		cout<<"4. Sell Product "<<endl;
		cout<<"5. Show Product info in Stock "<<endl;
		cout<<"6. Show All Purchases "<<endl;
		cout<<"7. Show All Sales "<<endl;
		cout<<"8. Delete a Product "<<endl;
		cout<<"x. Exit"<<endl;
		cout<<"\nEnter Option : ";
		cin>>ch;
		if(ch == '1')
		{
			add();
		}
		else if(ch == '2')
		{
			showall();
		}
		else if(ch == '3')
		{
			addpur();
		}
		else if(ch == '4')
		{
			addsales();
		}
		else if(ch == '5')
		{
			stockinfo();
		}
		else if(ch == '6')
		{
			showp();
		}
		else if(ch == '7')
		{
			shows();
		}
		else if(ch == '8')
		{
			del();
		}
		else if(ch == 'x')
		{
			break;
		}
		else
		{
			cout<<endl;
			cout<<"\aYou Enter an Invalid Option.\nSelect another Option"<<endl;
		}
	}
	getch();
	return 0;
}
