#include<iostream.h>
#include<conio.h>

class area
{
	public:
		int l, b, ar;
	private:
		void get();
		void cal();
		void display();
};

void area::get()
{
	cout<<"Enter length: ";
	cin>>l;
	cout<<"Enter breadth: ";
	cin>>b;
}

void area::cal()
{
	ar = l*b;
}

void area::display()
{
	cout<<"Area of rectangle: "<<ar;
}

void main()
{
	clrscr();
	area a;
	a.get();
	a.cal();
	a.display();
	getch();
}