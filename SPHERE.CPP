#include<iostream.h>
#include<conio.h>

void main()
{
	int r;
	float pi = 3.14, area;

	clrscr();
	cout<<"Enter radius of Sphere: ";
	cin>>r;

	area = 4 * pi * r * r;
	cout<<"Area of sphere = "<<area<<endl;
	getch();
}