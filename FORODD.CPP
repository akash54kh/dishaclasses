#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();

	for (a=1; a<20; a++)
	{
		cout<<setw(5)<<a;
		a++;
	}

	getch();
}