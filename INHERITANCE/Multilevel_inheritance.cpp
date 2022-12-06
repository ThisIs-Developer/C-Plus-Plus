#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		void disA()
		{
			cout<<"IN CLSSS A"<<endl;
			cout<<"X = "<<x<<endl;
		}
};
class B:public A
{
	public:
		int y;
		void disB()
		{
			cout<<"\nIN CLASS B"<<endl;
			cout<<"X = "<<x<<endl;
			cout<<"Y = "<<y<<endl;
			disA();
		}
};
class C:public B
{
	public:
		int z;
		void disC()
		{
			cout<<"\nIN CLASS C"<<endl;
			cout<<"X = "<<x<<endl;
			cout<<"Y = "<<y<<endl;
			cout<<"Z = "<<z<<endl;
			disB();
		}
};
int main()
{
	C ob;
	ob.x=58;
	ob.y=59;
	ob.z=60;
	ob.disA();
	ob.disB();
	ob.disC();
	return 0;
}
