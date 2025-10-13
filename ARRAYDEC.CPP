#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	int a[5] = {10, 20, 30, 40, 50}, i;
	clrscr();

	cout<<"The 5 array elements delared are:"<<endl;
	for (i=0; i<5; i++)
	{
		cout<<setw(5)<<a[i];
	}
	getch();
}