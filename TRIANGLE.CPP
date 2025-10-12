#include<iostream.h>
#include<conio.h>

void main()
{
	int base, height;
	float area;

	clrscr();
	cout<<"Input base and height of the triangle: ";
	cin>>base>>height;

	area = 0.5 * base * height;

	cout<<"Area of the triangle = "<<area;
	getch();
}