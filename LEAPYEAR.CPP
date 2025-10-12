#include<iostream.h>                     xx
#include<conio.h>
void main()
{
	int year,flag;
	clrscr();

	cout<<"Enter a year: ";
	cin>>year;

	if (year%100==0)
	{
		if (year%400==0)
		{
			flag = 1;
		}

		else
		{
			flag = 0;
		}
	}

	else
	{
		if (year%4==0)
		{
			flag = 1;
		}

		else
		{
			flag = 0;
		}
	}

	if (flag==1)
	{
		cout<<"Year "<<year<<" is a leap year."<<endl;
	}

	else
	{
		cout<<"Year "<<year<<" is not a leap year."<<endl;
	}

	getch();
}