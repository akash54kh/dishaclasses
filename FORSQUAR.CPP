#include<iostream.h>
#include<conio.h>
void main()
{
	int i, j;
	clrscr();

	for (i=0; i<=10; i++)
	{
		for (j=0; j<=10; j++)
		{
			if (i==0 || i==10)
			{
				cout<<"* ";
			}
			else if (j==0 || j==10)
			{
				cout<<"* ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	getch();
}