#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			cout<<"IN DISPLAY A"<<endl;
		}
};
class B
{
	public:
		void display()
		{
			cout<<"IN DISPLAY B"<<endl;
		}
};
class C:public A,public B
{
	public:
		void display()
		{
			cout<<"IN DISPLAY C"<<endl;
		}
};
int main()
{
	C ob;
	ob.A::display();
	ob.B::display();
	ob.display();
	return 0;
}
