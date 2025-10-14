#include<iostream.h>
#include<conio.h>

class Sub
{
	private:
		int a,b,result;
	public:
		void get();
		void diff();
		void display();
};

void Sub::get()
{
	cout<<"Enter two numbers: ";
	cin>>a>>b;
}

void Sub::diff()
{
	result = a - b;
}

void Sub::display()
{
	cout<<"Difference between two numbers: "<<result;
}

void main()
{
	Sub s1;
	clrscr();
	s1.get();
	s1.diff();
	s1.display();
	getch();
}