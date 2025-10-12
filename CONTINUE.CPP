#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	int n, i=0;
	clrscr();
	cout<<"Enter the limit: ";
	cin>>n;

	while (i<=n)
	{
		i++;
		if (i%5==0) continue;
		cout<<setw(4)<<i;
	}
	getch();
}