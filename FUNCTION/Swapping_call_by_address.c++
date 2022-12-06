#include<iostream>
using namespace std;
void swaping(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
	cout<<"a= "<<*a<<endl;
	cout<<"b= "<<*b<<endl;
}
int main()
{
	int a=10,b=20;
	int *ptr1,*ptr2;
	ptr1=&a;
	ptr2=&b;
	swaping(ptr1,ptr2);
	return 0;
}
