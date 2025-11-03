#include<iostream.h>
#include<conio.h>
void main()
{
	int a[100];
	int i,n;

	clrscr();
	cout<<"Enter number of elements in the array: ";
	cin>>n;

	//Input array elements
	cout<<"Enter the array elements:"<<endl;
	for (i=0; i<n; i++)
	{
		cout<<"Input the value for number "<<i+1<<" = ";
		cin>>a[i];
	}

	cout<<endl<<"Array elements are "<<endl;
	for (i=0; i<n; i++)
	{
		cout<<"Number "<<i+1<<" = "<<a[i]<<endl;
	}
	getch();
}