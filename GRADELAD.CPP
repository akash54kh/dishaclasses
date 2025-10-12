#include<iostream.h>
#include<conio.h>
void main()
{
	int marks;
	clrscr();

	cout<<"Enter marks out of 100: ";
	cin>>marks;

	if (marks>100)
	{
		cout<<"Invalid marks! "<<endl;
	}

	/* Actual Program */
	if (marks>=90)
	{
		if (marks<=100)
		{
			cout<<"Secured A+ Grade"<<endl;
		}
	}

	else if (marks>=80)
	{
		cout<<"Secured A Grade"<<endl;
	}

	else if (marks>=70)
	{
		cout<<"Secured B+ Grade"<<endl;
	}

	else if (marks>=60)
	{
		cout<<"Secured B Garde"<<endl;
	}

	else if (marks>=40)
	{
		cout<<"Secured C Grade"<<endl;
	}

	else if (marks>=33)
	{
		cout<<"Just Passed !!"<<endl;
	}

	else
	{
		cout<<"Student has Failed."<<endl;
	}

	getch();
}
