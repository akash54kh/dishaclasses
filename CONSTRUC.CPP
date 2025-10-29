#include<iostream.h>
#include<conio.h>
class Student
{
	public:
		Student() // Constructor defination
		{
			cout<<"Constructor called automatically";
			cout<<" at the time of object creation."<<endl;
		}
}; // end of class defination

/* Main program */
void main()
{
	clrscr();
	Student s1;   // object creation & constructor invoked automatically
	Student s2;   // object creation & constrcutor invoked automatically
	Student s3;   // object creation & constructor invoked automatically
	getch();
}