#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

void main()
{
	int a = 1234;
	float pi = 3.14159265;
	clrscr();

	cout<<"Welcome to C++"<<endl;
	cout<<"Disha"<<setw(10)<<setfill('+')<<"Akash"<<endl;
	cout<<"Precision value of Pi: "<<setprecision(3)<<pi<<endl;

	cout<<"Decimal Value: "<<dec<<a<<endl;
	cout<<"Octal Value: "<<oct<<a<<endl;
	cout<<"Hexa Decimal Value: "<<hex<<a<<endl;

	getch();
}