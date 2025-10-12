#include<iostream.h>
#include<conio.h>
void main()
{
	int a, b;
	clrscr();

	cout<<"Enter values of A and B: ";
	cin>>a>>b;

	if (a>b)
	{
		cout<<"A = "<<a<<" is greater."<<endl;
	}

	else
	{
		cout<<"B = "<<b<<" is greater."<<endl;
	}

	getch();
}