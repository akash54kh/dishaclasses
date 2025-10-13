#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	int a[100], b[100], c[100], i, n;
	clrscr();

	cout<<"Enter number of elements into array: ";
	cin>>n;

	cout<<"Enter "<<n<<" numbers into array A: ";
	for (i=0; i<n; i++)
	{
		cin>>a[i];
	}

	cout<<"Enter "<<n<<" numbers into array B: ";
	for (i=0; i<n; i++)
	{
		cin>>b[i];
	}

	for (i=0; i<n; i++)
	{
		c[i]=a[i]+b[i];
	}

	cout<<"The elements after addition in Array C: "<<endl;
	for (i=0; i<n; i++)
	{
		cout<<setw(5)<<c[i];
	}

	getch();
}

