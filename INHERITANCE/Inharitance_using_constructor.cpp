#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"IN CLASS A"<<endl;
		}
};
class B
{
	public:
		B()
		{
			cout<<"IN CLASS B"<<endl;
		}
};
class C:public B,public A
{
	public:
		C()
		{
			cout<<"IN CLASS C"<<endl;
		}
};
int main()
{
	C ob;
	return 0;
}
