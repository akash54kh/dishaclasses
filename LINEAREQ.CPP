#include<iostream.h>
#include<conio.h>
void main()
{
	float a1, a2, b1, b2, c1, c2, x, y;
	clrscr();

	cout<<"Linear equation in two variables!"<<endl<<endl;
	cout<<"Enter values of a, b, c in eqn1: ";
	cin>>a1>>b1>>c1;
	cout<<"Enter values of a, b, c in eqn2: ";
	cin>>a2>>b2>>c2;

	x = (b1*c2 - b2*c1) / (a1*b2 - a2*b1);
	y = (c1*a2 - c2*a1) / (a1*b2 - a2*b1);

	cout<<"Solution to the pair of equation is ("<<x<<", "<<y<<").";
	getch();
}