#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"ENTRE THE FIRST VALUE : ";
	cin>>a;
	cout<<"ENTRE THE SECOND VALUE : ";
	cin>>b;
	cout<<"a : "<<a<<endl;
	cout<<"b : "<<b<<endl;
	a=a-b;
	b=b+a;
	a=b-a;
	cout<<"AFTER SWAPPING "<<endl;
	cout<<"a : "<<a<<endl;
	cout<<"b : "<<b<<endl;
	return 0;
}