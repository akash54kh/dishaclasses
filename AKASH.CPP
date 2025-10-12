#include<iostream.h>
#include<conio.h>

void main()
{
	int Rollno;
	char name[50];
	float fees;

	clrscr();
	cout<<"Enter Roll No: ";
	cin>>Rollno;

	cout<<"Enter Name: ";
	cin>>name;

	cout<<"Enter fees: ";
	cin>>fees;

	cout<<"Your roll number is "<<Rollno<<endl;
	cout<<"Your name entered is "<<name<<endl;
	cout<<"Defraying Amount: INR"<<fees<<endl;

	getch();
}