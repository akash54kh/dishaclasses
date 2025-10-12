#include<iostream.h>
#include<conio.h>
void main()
{
	float amt, disamt, payamt;
	clrscr();

	cout<<"Enter Purchase Amount INR: ";
	cin>>amt;

	if (amt>=5000)
	{
		cout<<"Eligible for 20% discount."<<endl;
		disamt = 0.2 * amt;
		payamt = amt - disamt;
		cout<<"Discount Amount = INR "<<disamt<<endl;
		cout<<"You are required to pay INR "<<payamt<<endl;
	}

	else if (amt>=3000)
	{
		cout<<"Eligible for 10% discount."<<endl;
		disamt = 0.1 * amt;
		payamt = amt - disamt;
		cout<<"Discount Amount = INR "<<disamt<<endl;
		cout<<"You are required to pay INR "<<payamt<<endl;
	}

	else if (amt>=2000)
	{
		cout<<"Eligible for 5% discount."<<endl;
		disamt = 0.05 * amt;
		payamt = amt - disamt;
		cout<<"Discount Amount = INR "<<disamt<<endl;
		cout<<"You are required to pay INR "<<payamt<<endl;
	}

	else
	{
		cout<<"Not eligible for any discount."<<endl;
		cout<<"You are required to pay full amount."<<endl;
	}

	getch();
}