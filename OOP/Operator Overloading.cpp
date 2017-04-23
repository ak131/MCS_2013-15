/*Write a program with an encapsulated class Book (BookId, NumberOfPages, Price). Overload the
operators as followings:
a) + and -, so that when an integer m is added/subtracted to/from object of class Book, its
	number of pages should be modified by m.
b) * operator, so that when an integer m is multiplied to object of class Book, its price should
	be increased m number of times.
c) << operator, so that when cout is used for the object, the data members of object class should
	be displayed.*/
#include<iostream>
using namespace std;
#include<conio.h>
class Book
{
	int bookid;
	int pages;
	float price;
	public:
		Book()
		{
			bookid = 0;
			pages = 0;
			price = 0;
		}
		Book(int bookid,int pages,int price)
		{
			setData(bookid,pages,price);
		}
		void inputData()
		{
			cout<<"Enter Book ID : ";
			cin>>bookid;
			cout<<"Enter Number of Pages : ";
			cin>>pages;
			cout<<"Enter Price : ";
			cin>>price;
		}
		void printData()
		{
			cout<<"\nBook ID : "<<bookid<<endl;
			cout<<"Numer of Pages : "<<pages<<endl;
			cout<<"Price : "<<price<<endl;
		}
		void setData(int bookid,int pages,float price)
		{
			this->bookid = bookid;
			this->pages = pages;
			this->price = price;
		}
		int getBookID()
		{
			return bookid;
		}
		int getNumberOfPages()
		{
			return pages;
		}
		float getPrice()
		{
			return price;
		}
		Book operator +(int m)
		{
			pages = pages + m;
			return *this;
		}
		Book operator -(int m)
		{
			pages = pages - m;
			return *this;
		}
		Book operator *(int m)
		{
			price = price * m;
			return *this;
		}
		friend ostream & operator <<(ostream&stream,const Book & b)
		{
			cout<<"\nObject Contains : "<<endl;
			stream<<b.bookid<<endl;
			stream<<b.pages<<endl;
			stream<<b.price<<endl;
		}
};
int main()
{
	int m;
	cout<<"m = ";
	cin>>m;
	Book b;
	b.inputData();
	b.printData();
	b = b + m;
	b.printData();
	b = b - m;
	b.printData();
	b = b * m;
	b.printData();
	cout<<b<<endl;
	getch();
	return 0;
}
