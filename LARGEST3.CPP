#include<iostream.h>
#include<conio.h>
void main()
{
	int a, b, c;
	clrscr();

	cout<<"Enter three numbers A, B and C: ";
	cin>>a>>b>>c;

	if (a>b)
	{
		if (a>c)
		{
			cout<<"A = "<<a<<" is greater."<<endl;
		}
		else
		{
			cout<<"C = "<<c<<" is greater."<<endl;
		}
	}

	else if (b>c)
	{
		cout<<"B = "<<b<<" is greater."<<endl;
	}

	else
	{
		cout<<"C = "<<c<<" is greater."<<endl;
	}

	getch();
}