#include<iostream.h>
#include<conio.h>

void main()
{
	int a, b;
	clrscr();

	cout<<"Enter value for A: ";
	cin>>a;

	cout<<"Enter value for B: ";
	cin>>b;

	a+=6;
	b-=10;

	cout<<"Value of A after adding 6: "<<a<<endl;
	cout<<"Value of B after substracting 10: "<<b;
	getch();
}