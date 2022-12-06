#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		int y;
		void displayA()
		{
			cout<<"\nIN A CLASS";
			cout<<"\nX = "<<x;
			cout<<"\nY = "<<y;
		}
};
class B:public A
{
	public:
		int z;
		void displayB()
		{
			cout<<"\n\nIN B CLASS";
			cout<<"\nX = "<<x;
			cout<<"\nY = "<<y;
			cout<<"\nZ = "<<z;
		}
};
int main()
{
	B ob;
	ob.x=10;
	ob.y=20;
	ob.z=30;
	ob.displayA();
	ob.displayB();
	return 0;
}
