#include<iostream>
using namespace std;
class A
{
	public:
		void display();
};
void A::display()
{
	cout<<"IN DISPLAY";
}
int main()
{
	A ob;
	ob.display();
	return 0;
}
