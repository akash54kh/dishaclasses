#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	int n, i=1;
	clrscr();
	cout<<"Enter a number: ";
	cin>>n;
  LOOP: cout<<setw(4)<<i++;
	if (i<=n) goto LOOP;
	getch();
}