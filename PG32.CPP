#include<iostream.h>
#include<conio.h>
void main()
{
	int a[100], i, n;
	int odd=0, even=0;

	clrscr();
	cout<<"Enter number of elements in the array: ";
	cin>>n;
	cout<<"Enter the array elements: "<<endl;
	for (i=0; i<n; i++)
	{
		cout<<"Input the value for number "<<i+1<<" = ";
		cin>>a[i];
	}
	for (i=0; i<n; i++)
	{
		if (a[i] % 2 == 0)
			++even;
		else
			++odd;
	}
	cout<<"Number of Odd elements = "<<odd<<endl;
	cout<<"Number of Even elements = "<<even<<endl;
	getch();
}