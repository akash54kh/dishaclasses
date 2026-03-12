#include<iostream.h>
#include<conio.h>
class Number
{
	private:
		int data;
	public:
		Number()
		{
			cout<<"Constructor invoked."<<endl;
			data = 80;
		}

		~Number()  // destructor
		{
			cout<<"Destructor"<<endl;
		}

		void displaydata()
		{
			cout<<"Data is = "<<data<<endl;
		}
};

void main()
{
	clrscr();
	Number N;
	N.displaydata();
	Number a;
	getch();
}