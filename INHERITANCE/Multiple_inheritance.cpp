#include<iostream>
using namespace std;
class A
{
	public:
		int x=5;
		void disA()
		{
			cout<<"IN CLASS A"<<endl;
			cout<<"X = "<<x<<endl;
		}
};
class B
{
	public:
		int y=10;
		void disB()
		{
			cout<<"IN CLASS B"<<endl;
			cout<<"Y = "<<y<<endl;
		}
};
class C:public A,public B
{
	public:
		int z=20;
		void disC()
		{
			cout<<"IN CLASS C"<<endl;
			cout<<"X = "<<x<<endl;
			cout<<"Y = "<<y<<endl;
			cout<<"Z = "<<z<<endl;
		}
};
int main()
{
	C ob;
	ob.disC();
	return 0;
}
