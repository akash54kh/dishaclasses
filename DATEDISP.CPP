#include<iostream.h>
#include<conio.h>

class Date
{
	private:
		int day, month, year;

	public:
		void InputDate()     //    member function
		{
			cout<<"Enter a Date as DD MM YY : ";
			cin>>day>>month>>year;
		}

		void DisplayDate()  //     member function
		{
			cout<<"Entered date is ";
			cout<<day<<"/"<<month<<"/"<<year;
		}
};   // end of class defination

void main()
{
	Date Today; // object creation
	clrscr();
	Today.InputDate();
	Today.DisplayDate();
	getch();
}

