#include<iostream.h>
#include<conio.h>
void main()
{
	int i=0, a, sum=0;
	clrscr();

	cout<<"Enter upto number: ";
	cin>>a;

	while (i<=a)
	{
		sum = i + sum;
		i = i + 2;
	}
	cout<<"Sum of even numbers upto "<<a<<" = "<<sum;
	getch();
}