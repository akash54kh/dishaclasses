#include<iostream.h>
#include<conio.h>

class car
{
	long price;
	char name[100];

	public:
		void get()
		{
			cout<<"Enter Car Name: ";
			cin>>name;
			cout<<"Enter Price: ";
			cin>>price;
		}

		void display()
		{
			cout<<"CAR: "<<name<<endl;
			cout<<"Rate: INR "<<price;
		}
};
void main()
{
	clrscr();
	car c1;
	c1.get();
	c1.display();
	getch();
}