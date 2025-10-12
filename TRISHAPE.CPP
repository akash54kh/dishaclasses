#include<iostream.h>
#include<conio.h>
void main()
{
	int i, j, k=1;
	clrscr();

	for (i=0; i<=5; i++)
	{
		for (j=0; j<k; j++)
		{
			cout<<"* ";
		}
		k += 1;
		cout<<endl;
	}
	getch();
}