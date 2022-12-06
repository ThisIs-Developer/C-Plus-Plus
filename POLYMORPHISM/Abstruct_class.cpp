#include<iostream>
using namespace std;
class A
{
	public:
		virtual void display()=0;
};
class B
{
	public:
		void display()
		{
			cout<<"IN DISPLAY B"<<endl;
		}
};
int main()
{
	B ob;
	ob.display();
	return 0;
}
