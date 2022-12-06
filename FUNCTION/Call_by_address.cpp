#include<iostream>
using namespace std;
void display(int *p)
{
	cout<<"IN DISPLAY";
	cout<<"X = "<<*p;
}
int main()
{
	int x=5;
	int *ptr;
	ptr=&x;
	display(ptr);
	return 0;
}