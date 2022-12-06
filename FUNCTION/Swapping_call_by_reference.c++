#include<iostream>
using namespace std;
void swaping(int &a,int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
}
int main()
{
	int a=10,b=20;
	int &ref1=a;
	int &ref2=b;
	swaping(ref1,ref2);
	return 0;
}
