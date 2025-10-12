#include<iostream.h>
#include<conio.h>

void main()
{
	float Celsius, Fahrenheit;
	clrscr();

	cout<<"Input temperature in Celsius: ";
	cin>>Celsius;

	Fahrenheit = 9*Celsius/5+32;

	cout<<Celsius<<" Degree Celsius = "<<Fahrenheit<<" Degree Fahrenheit";
	getch();
}