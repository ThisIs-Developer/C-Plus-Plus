#include<iostream>
using namespace std;
class A
{
	public:
		int x;
	private:
		int y;
	protected:
		int z;
	public:
		void setA(int y1);
		void displayA()
		{
			cout<<"IN A CLASS"<<endl;
			cout<<"X = "<<x<<endl;
			cout<<"Y = "<<y<<endl;
			cout<<"Z = "<<z<<endl;
		}
};
class B:private A
{
	public:
		void setB(int x1,int y1,int z1)
		{
			x=x1;
			setA(y1);
			z=z1;
		}
		void displayB()
		{
			cout<<"IN B CLASS"<<endl;
			cout<<"X = "<<x<<endl;
			cout<<"Z = "<<z<<endl;
			displayA();
		}
};
int main()
{
	B ob;
	ob.setB(10,20,30);
	ob.displayB();
	return 0;
}