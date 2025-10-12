#include<iostream.h>
#include<conio.h>

void main()
{
	int r;
	float pi = 3.14, area;

	clrscr();
	cout<<"Enter radius of circle: ";
	cin>>r;

	area = pi * r * r;
	cout<<"Area of circle = "<<area<<endl;
	getch();
}