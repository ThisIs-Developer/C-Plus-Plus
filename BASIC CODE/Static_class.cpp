#include<iostream>
using namespace std;
class example 
{
	public:
		static int x;
		void display()
		{
			cout<<"X = "<<x;
		}
};
int example :: x=5;
int main()
{
	example ob;
	ob.display();
	cout<<"X = "<<ob.x<<endl;
	return 0;
}
