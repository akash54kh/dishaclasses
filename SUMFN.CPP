#include<iostream.h>
#include<conio.h>

int Sum(int a, int b);

void main()
{
	int a, b;
	clrscr();
	cout<<"Input two numbers: ";
	cin>>a>>b;
	cout<<"Sum of two numbers = "<<Sum(a,b);
	getch();
}

int Sum(int n1, int n2)
{
	int s;
	s = n1 + n2;
	return (s);
}
