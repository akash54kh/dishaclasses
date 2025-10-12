#include<iostream.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();

	cout<<"Enter a number: ";
	cin>>x;

	if (x%2==0)
	{
		cout<<"The number is even."<<endl;
	}

	else
	{
		cout<<"The number is odd."<<endl;
	}

	getch();
}