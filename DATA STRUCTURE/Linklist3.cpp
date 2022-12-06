#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
};
int main()
{
	struct Node* start;
	struct Node* ptr;
	ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=10;
	ptr->next=NULL;
	start=ptr;
	cout<<ptr->data<<"->"<<"NULL";
	return 0;
}