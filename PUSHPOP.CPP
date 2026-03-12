#include<iostream.h>
#include<conio.h>
void push(int);
int pop();
void display();
#define max 5
static int top = -1;
static int status = 1;
int stack[max];

void main()
{
	int choice, item, exitflag=1;
	while (exitflag)
	{
		clrscr();
		status=1;
		cout<<"Stack Operations: "<<endl;
		cout<<" 1. Push"<<endl;
		cout<<" 2. Pop"<<endl;
		cout<<" 3. Display Contents"<<endl;
		cout<<" 4. Exit"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch (choice)
		{
			case 1: cout<<"Enter item to Push: ";
					cin>>item;
					push(item);
				if (status)
					cout<<item<<" is inserted as element "<<top+1<<endl;
				else
					cout<<"Stack is full or Overflow"<<endl;
				getch();
				break;

			case 2: item = pop();
				if (status)
					cout<<"Poped item is: "<<item;
				else
					cout<<"Stack is empty or underflow"<<endl;
				getch();
				break;

			case 3: cout<<"The Stack contents are: "<<endl;
				display();
				break;

			case 4: exitflag = 0;
				break;

			default: cout<<"Invalid choice!!!!!"<<endl;
				getch();
		}
	}
}//end of main function

void push(int item)
{
	if (top==max-1)
	{
		status=0;
	}
	else
	{
		status=1;
		top++;
		stack[top]=item;
	}
}

int pop()
{
	int item;
	if (top==-1)
	{
		status=0;
		return 0;
	}
	else
	{
		item = stack[top];
		top--;
		return item;
	}
}

void display()
{
	int i;
	if (top==-1)
		cout<<"Empty stack!!!!!!!"<<endl;
	else
		for (i=top; i>=0; i--)
			cout<<"STACK["<<i<<"] = "<<stack[i]<<endl;
	getch();
}
