#include<iostream.h>
#include<conio.h>
void main()
{
	int n, i, Prime;
	clrscr();

	cout<<"Input a number: ";
	cin>>n;
	Prime = 1; // Assume that given number is prime

	for (i=2; i<=n/2; i++)
	{
		if (n%i==0)
		{
			Prime = 0;
			break; // The given number is not prime.
		}
	}

	if (Prime == 1)
	{
		cout<<n<<" is a prime number."<<endl;
	}
	else
	{
		cout<<n<<" is not a prime number."<<endl;
	}

	getch();
}