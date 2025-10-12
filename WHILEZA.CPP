#include<iostream.h>
#include<conio.h>
void main()
{
	char ch='Z';
	clrscr();
	cout<<"Reverse Alphabets are as follows: "<<endl;

	while (ch>='A')
	{
		cout<<ch<<"   ";
		ch--;
	}

	getch();
}
