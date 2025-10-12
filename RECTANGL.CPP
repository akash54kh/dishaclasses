#include<iostream.h>
#include<conio.h>

void main()
{
	int length, breadth, area;
	clrscr();

	cout<<"Enter length and breadth of rectangle: ";
	cin>>length>>breadth;

	area = length * breadth;
	cout<<"Area of rectangle = "<<area<<endl;

	getch();
}