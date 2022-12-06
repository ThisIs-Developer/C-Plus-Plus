#include<iostream>
using namespace std;
class A
{
	public:
		virtual void display()
		{
			cout<<"IN A CLSSS"<<endl;
		}
};
class B:public A
{
	public:
		void display()
		{
			cout<<"IN CLASS B"<<endl;
		}	
};
int main()
{
	B ob;
	A *ptr;
	ptr=&ob;
	ptr->display();
	ob.display();
	return 0;
}