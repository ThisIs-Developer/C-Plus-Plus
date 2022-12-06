#include<iostream>
using namespace std;
void display(int &p)
{
	cout<<"IN DISPLAY"<<endl;
	cout<<"X = "<<p<<endl;
}
int main()
{
	int x=5;
	int &ref=x;
	cout<<"X = "<<x<<endl;
	cout<<"X = "<<ref<<endl;
	return 0;
}