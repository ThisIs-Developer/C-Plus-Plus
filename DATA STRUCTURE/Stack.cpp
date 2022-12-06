#include<iostream>
#define maxsize 5
using namespace std;
int sta[maxsize];
	int top=-1;
class stack
{
	public:
		void push(int v);
		int pop();
		void display();
};
void stack::push(int v)
{
	if(top==maxsize-1)
	{
		cout<<"STACK OVERFLOW"<<endl;
	}
	else
	{
		top++;
		sta[top]=v;
	}
}
int stack::pop()
{
	if(top==-1)
	{
		cout<<"STACK UNDERFLOW"<<endl;
	}
	else
	{
		cout<<"DELETED ELEMENT = "<<sta[top]<<endl;
		top--;
	}
}
void stack::display()
{
	if(top==-1)
	{
		cout<<"STACK UNDERFLOW"<<endl;
	}
	else
	{
		int i;
		for(i=top;i>=0;i--)
		{
			printf("\n|%d|",sta[i]);
		}
	}
}
int main()
{
	stack ob;
	int choice,v;
	for(;;)
	{
		cout<<"\n (1)PUSH\n (2)POP\n (3)DISPLAY\n (4)EXIT\n";
		cout<<"\nENTRE YOUR CHOICE = ";
		cin>>choice;
		switch(choice)
		{
			case 1 :
			{
			  cout<<"ENTRE ELEMENT = ";
			  cin>>v;
				ob.push(v);
				break;	
			} 
			case 2 :
			{
				ob.pop();
				break;
			}
			case 3 :
			{
				ob.display();
				break;
			}
			case 4 :
			{
				cout<<"EXIT"<<endl;
				return 0;
			}
		}
	}
	return 0;
}
