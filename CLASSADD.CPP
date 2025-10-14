#include<iostream.h>
#include<conio.h>

class Addition
{
	private:
		int a,b,sum;
	public:
		void get();
		void cal();
		void display();
};

void Addition::get()
{
	cout<<"Enter two numbers: ";
	cin>>a>>b;
}

void Addition::cal()
{
	sum = a + b;
}

void Addition::display()
{
	cout<<"Addition of two numbers: "<<sum;
}

void main()
{
	clrscr();
	Addition a;
	a.get();
	a.cal();
	a.display();
	getch();
}