#include<iostream.h>
#include<conio.h>

class Date
{
	public:
		int day, month, year;
}; // end of class defination

/* Main function */
void main()
{
	Date Today;
	Today.day = 17;
	Today.month = 10;
	Today.year = 2013;
	cout<<"Today is ";
	cout<<Today.day<<"/"<<Today.month<<"/"<<Today.year;

	getch();
}