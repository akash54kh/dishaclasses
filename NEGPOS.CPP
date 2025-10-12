#include<iostream.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();

	cout<<"Enter any integer: ";
	cin>>a;

	if (a!=0)
	{

	if (a>=0)
	{
		cout<<"The integer is positive."<<endl;
	}

	else
	{
		cout<<"The integer is negative."<<endl;
	}

	}
	getch();
}