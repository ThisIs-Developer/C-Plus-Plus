#include<iostream>
using namespace std;
typedef struct Node
{
	int data;
	struct Node* next;
}node;
node* start=NULL;
class linklist
{
	public:
		void insert(int);
		void deletion();
		void print();
}; 
void linklist::insert(int value)
{
	node* newptr=NULL,*ptr;
	newptr=(node*)malloc(sizeof(node));
	newptr->data=value;
	newptr->next=NULL;
	if(start==NULL)
	{
		start=newptr;
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=newptr;
	}
}
void linklist::deletion()
{
	node *ptr=start, *nptr=start;
	while(ptr->next!=NULL){
		nptr=ptr;
		ptr=ptr->next;
	}
	nptr->next=NULL;
	free(ptr);
}
void linklist::print()
{
	node* ptr;
	ptr=start;
	while(ptr)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	cout<<"NULL";
}
int main()
{
	linklist ob;
	while(1)
	{
		char choice;
		int value;
		cout<<"\nDO YOU WANT TO INSERT(Y=YES) = ";
		cin>>choice;
		if(choice=='Y' || choice=='y')
		{
			cout<<"\nENTER THE VALUE = ";
			cin>>value;
			ob.insert(value);
		}
		else
			break;
		cout<<"\nLINKLIST"<<endl;
		ob.print();
	}
	cout<<"\nLINKLIST"<<endl;
	ob.print();
	while(1)
	{
		char choice;
		int value;
		cout<<"\nDO YOU WANT TO DELETE(Y=YES) = ";
		cin>>choice;
		if(choice=='Y' || choice=='y')
		{
			ob.deletion();
		}
		else
			break;
		cout<<"\nLINKLIST"<<endl;
		ob.print();
	}
	cout<<"\nLINKLIST"<<endl;
	ob.print();
	return 0;
}