#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	float s1, s2, s3, s4, s5;
	float per;
	
	cout<<"Enter marks of first subect ";
	cin>>s1;
	
	cout<<"Enter marks of second subject ";
	cin>>s2;

	cout<<"Enter marks of third subject ";
	cin>>s3;
	
	cout<<"Enter marks of fourth subject ";
	cin>>s4;
	
	cout<<"Enter marks of fifth subject ";
	cin>>s5;
	
	if((s1>100)||(s1<0)||(s2>100)||(s2<0)||(s3>100)||(s3<0)||(s4>100)||(s4<0)||(s5>100)||(s5<0))
	cout<<"Invalid Marks"<<endl;
	
	else
	{
	per = (s1+s2+s3+s4+s5)/500 * 100;
	
	if ((per>=80)&&(per<=100))
	cout<<"Student grade is A"<<endl;
	
	else if ((per>=70)&&(per<=79))
	cout<<"Student grade is B"<<endl;
	
	else if ((per>=60)&&(per<=69))
	cout<<"Student grade is C"<<endl;
	
	else if ((per>=50)&&(per<=59))
	cout<<"Student grade is D"<<endl;
	
	else if (per<50)
	cout<<"Student grade is F"<<endl;
	}
	getch();
	return 0;
}
