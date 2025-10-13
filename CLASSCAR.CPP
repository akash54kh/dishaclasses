#include<iostream.h>
#include<iomanip.h>
#include<conio.h>

class Car
{
	public:
		int year;
		char model[10], color[10];
		float price;
};

void main()
{
	Car c1;
	clrscr();

	c1.year = 2016;
	cout<<"Enter Car Model Name: ";
	cin>>c1.model;
	cout<<"Enter Colour of the Car: ";
	cin>>c1.color;
	c1.price = 55999.90;

	cout<<endl<<"Car Details:"<<endl;
	cout<<c1.model<<"\t"<<c1.color<<"\t"<<c1.year<<"\t"<<c1.price;

	getch();
}

