#include<iostream>
using namespace std;
class A
{
	public:
		void DisplayA()
		{
			cout<<"\nIN DISPLAY A";
		}
};
class B:public A
{
	public:
		void DisplayB()
		{
			cout<<"\nIN DISPLAY B";
		}
};
class C:public A
{
	public:
		void DisplayC()
		{
			cout<<"\nIN DISPLAY C";
		}
};
class D:public B, public C
{
	public:
		void DisplayD()
		{
			cout<<"\nIN DISPLAY D";
		}
};
int main()
{
	D ob1;
	ob1.DisplayB();
	ob1.DisplayD();
	B ob2;
	ob2.DisplayA();
	ob2.DisplayB();
	C ob3;
	ob3.DisplayA();
	ob3.DisplayC();
	D ob4;
	ob4.DisplayB();
	ob4.DisplayC();
	return 0;
}