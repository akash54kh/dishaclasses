#include<iostream.h>
#include<conio.h>

double Sqr(double x); // Function declaration

void main()
{
	double a;
	clrscr();
	cout<<"Input a number: ";
	cin>>a;
	cout<<"Square of "<<a<<" = "<<Sqr(a); // Function call
	getch();
}

// Function defination

double Sqr(double x)
{
	return ( x*x );
}