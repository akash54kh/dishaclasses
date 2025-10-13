#include<iostream.h>
#include<conio.h>

class Book
{
	public:
		char a[100], t[80];
		float pr;
		int yr;
};

void main()
{
	Book b1;
	clrscr();

	cout<<"Enter Book Details: "<<endl;
	cout<<"Author: ";
	cin>>b1.a;
	cout<<"Book Name: ";
	cin>>b1.t;
	cout<<"Enter Price: ";
	cin>>b1.pr;
	cout<<"Enter Published Year: ";
	cin>>b1.yr;

	cout<<endl<<"Book Details entered are: "<<endl;
	cout<<"Book Author: "<<b1.a<<endl;
	cout<<"Book Name: "<<b1.t<<endl;
	cout<<"Book Price: INR "<<b1.pr<<endl;
	cout<<"Book Published: "<<b1.yr<<endl;

	getch();
}