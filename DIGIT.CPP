#include<iostream.h>
#include<conio.h>
void main()
{
	int num, digit;
	clrscr();
	cout<<"Enter a number: ";
	cin>>num;

	while (num > 0)
	{
		digit = num % 10;
		num = num / 10;
		cout<<"Digit = "<<digit<<endl;
	}
	getch();
}

