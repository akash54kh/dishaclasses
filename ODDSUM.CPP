#include<iostream.h>
#include<conio.h>
void main()
{
	int i = 1, a, sum = 0;
	clrscr();

	cout<<"Enter upto number: ";
	cin>>a;

	while (i<=a)
	{
		sum = i + sum;
		i += 2;
	}

	cout<<"Sum of odd numbers upto "<<a<<" = "<<sum;
	getch();
}