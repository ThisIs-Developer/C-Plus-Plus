#include<iostream>
using namespace std;
class example 
{
	public:
		static int x;
		static void display()
		{
			cout<<"STATIC FUNCTION"<<endl;
			cout<<"X = "<<x;
		}
};
int example :: x=5;
int main()
{
	example::display();
	cout<<"X = "<<example::x<<endl;
	return 0;
}
