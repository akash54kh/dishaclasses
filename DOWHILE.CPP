#include<iostream.h>
#include<conio.h>
void main()
{
	char ch='A';
	clrscr();
	cout<<"Alphabets A to Z are:"<<endl;
	do
	{
		cout<<ch<<"   ";
		ch++;
	} while (ch<='Z');
	getch();
}