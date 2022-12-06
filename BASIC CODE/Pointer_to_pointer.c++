#include<iostream>
using namespace std;
int main()
{
	int *p;
	int **q;
	int x=5;
	p=&x;
	q=&p;
	cout<<"ADDRESS OF X = "<<&x<<endl;
	cout<<"ADDRESS OF X = "<<p<<endl;
	cout<<"VALUE OF X = "<<*p<<endl;
	cout<<"ADDRESS OF P = "<<&p<<endl;
	cout<<"ADDRESS OF P = "<<q<<endl;
	cout<<"VALUE OF P = "<<*q<<endl;
	cout<<"VALUE OF P = "<<**q<<endl;
	return 0;
}
