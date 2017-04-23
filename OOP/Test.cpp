#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
int i=0,j=0;
class Test
{
	int int1;
	int int2[4];
	int **int3;
	char n[50];
	public:
		Test()//Constructor With No Arguments
		{
			int3 = new int*[3];
			for(i=0;i<3;i++)
				int3[i]=new int[2];
			
			int1=0;
			for(i=0;i<4;i++)
				int2[i]=0;
			
			for(i=0;i<3;i++)
				for(j=0;j<2;j++)
					int3[i][j]=0;
					
			strcpy(n,"");
		}
		Test(int int1,int*int2,int**int3,char*n)//Constructor With All Arguments
		{
			int3 = new int*[3];
			for(i=0;i<3;i++)
				int3[i]=new int[2];
			
			setData(int1,int2,int3,n);
		}
		~Test()//Destructor
		{	
			int1=0;
			for(i=0;i<4;i++)
				int2[i]=0;
			
			for(i=0;i<3;i++)
				for(j=0;j<2;j++)
					int3[i][j]=0;
					
			strcpy(n,"");
		} 
		Test(const Test &t)//Copy Constructor
		{
			int3 = new int*[3];
			for(i=0;i<3;i++)
				int3[i]=new int[2];
			
			int1=t.int1;
			for(i=0;i<4;i++)
				int2[i]=t.int2[i];
			
			for(i=0;i<3;i++)
				for(j=0;j<2;j++)
					int3[i][j]=t.int3[i][j];
					
			strcpy(n,t.n);
		}
		void inputData()//Function to input Data
		{
			cout<<"Enter int1 : ";
			cin>>int1;
			cout<<"Enter int2 : "<<endl;
			for(i=0;i<4;i++)
				cin>>int2[i];
			cout<<"Enter int3 : "<<endl;
			for(i=0;i<3;i++)
				for(j=0;j<2;j++)
					cin>>int3[i][j];
			cout<<"Enter n : ";
			cin>>n;
		}
		void printData()//Function to print Data
		{
			cout<<"\nint1 : "<<int1<<endl;
			cout<<"int2 : "<<endl;
			for(i=0;i<4;i++)
				cout<<"int2["<<i<<"] : "<<int2[i]<<endl;
			cout<<"int3 : "<<endl;
			for(i=0;i<3;i++)
				for(j=0;j<2;j++)
					cout<<"int3["<<i<<"]["<<j<<"] : "<<int3[i][j]<<endl;
			cout<<"n : "<<n<<endl;
		}
		void setData(int int1,int*int2,int**int3,char*n)
		{
			this->int1=int1;
			for(i=0;i<4;i++)
				this->int2[i]=int2[i];
			
			for(i=0;i<3;i++)
				for(j=0;j<2;j++)
					this->int3[i][j]=int3[i][j];
					
			strcpy(this->n,n);
		}
		int getInt1()
		{
			return int1;
		}
		int*getInt2()
		{
			return int2;
		}
		int**getInt3()
		{
			return int3;
		}
		char*getN()
		{
			return n;
		}
};
int main()
{
	int x,y;
	Test t1;
	t1.inputData();
	t1.printData();
	
	Test t2;
	t2.printData();
	
	Test t3 = t1;
	t3.printData();
	getch();
	return 0;
}
