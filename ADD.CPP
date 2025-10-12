#include<iostream.h>
#include<conio.h>

void main()
{
	int a, b, sum, diff, prod, rem;
	float div;
	clrscr();
	cout<<"Enter two numbers: ";
	cin>>a>>b;

	sum = a + b;
	diff = a - b;
	prod = a * b;
	div = a / b;
	rem = a % b;

	cout<<"Addition = "<<sum<<endl;
	cout<<"Difference = "<<diff<<endl;
	cout<<"Product = "<<prod<<endl;
	cout<<"Division = "<<div<<endl;
	cout<<"Remainder = "<<rem<<endl;

	getch();
}