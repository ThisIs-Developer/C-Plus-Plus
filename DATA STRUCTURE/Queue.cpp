#include<iostream>
#define maxsize 5
using namespace std;
class Queue
{
	public:
		int front=-1;
		int rear=-1;
		int queue[maxsize];
		void insert();
		void deletion();
		void display();
};
void Queue::insert()
{
	int item;
	if(rear==maxsize-1)
	{
		cout<<"QUEUE IS OVERFLOW"<<endl;
	}
	else 
	{
		if(front==-1 && rear==-1)
		{
			front=rear=0;
			cout<<"ENTER THE ELEMRENT = ";
		    cin>>item;
			queue[rear]=item;
		}
		else
		{
			cout<<"ENTER THE ELEMRENT = ";
			cin>>item;
			rear=rear+1;
			queue[rear]=item;
		}
	}
}
void Queue::deletion()
{
	if(front>rear)
	{
		cout<<"QUEUE IS EMPTY"<<endl;
	}
	else if(front==-1 && rear==-1)
	{
		cout<<"QUEUE IS EMPTY"<<endl;
	}
	else
	{
		cout<<"DELETED ELEMENT = "<<queue[front]<<endl;
		front=front+1;
	}
}
void Queue::display()
{
	int i;
	if(front== -1)
	{
		cout<<"QUEUE IS EMPTY"<<endl;
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			cout<<" "<<queue[i]<<endl;
		}
	}
}
int main()
{
	Queue ob;
	int choice;
	for(;;)
	{
		cout<<" (1)INSERT\n (2)DELETE\n (3)DISPLAY\n (4)EXIT\n"<<endl;
		cout<<"ENTRE YOUR CHOICE = ";
		cin>>choice;
		switch(choice)
		{
			case 1 :
				{
					ob.insert();
					break;
				}
			case 2 :
				{
					ob.deletion();
					break;
				}
			case 3 :
				{
					ob.display();
					break;
				}
			case 4 :
				{
					cout<<"EXITED\n"<<endl;
					return 0;
				}
		}
	}
	return 0;
}
