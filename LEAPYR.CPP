#include<iostream.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();

	cout<<"Enter a year in yyyy format: ";
	cin>>year;

	if (year%4==0)
	{
		cout<<"The year "<<year<<" is a leap year."<<endl;
	}

	else
	{
		cout<<"The year "<<year<<" is not a leap year."<<endl;
	}

	getch();
}