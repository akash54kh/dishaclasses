#include<iostream.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();

	cout<<"Enter current your age: ";
	cin>>age;

	if (age>=18)
	{
		cout<<"You are eligible to vote."<<endl;
	}

	else
	{
		cout<<"You are NOT eligible to vote."<<endl;
	}

	getch();
}