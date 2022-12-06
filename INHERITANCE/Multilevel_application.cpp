#include<iostream>
using namespace std;
class circle
{
	public :
		double r;
		double pari()
		{
			return 2*3.14*r;
		}
		double area()
		{
			return 3.14*r*r;
		}
};
class cylinder:public circle
{
	public:
		double h;
		double paricylinder()
		{
			return pari()*h+2*area();
		}
		double volumecylinder()
		{
			return area()*h;
		}
};
class cone:public cylinder
{
	public:
		double l;
		double paricone()
		{
			return 3.14*r*l+area();
		}
		double volumecone()
		{
			return volumecylinder()/3;
		}
};
int main()
{
	cone ob;
	ob.r=10;
	ob.h=5;
	ob.l=7;
	cout<<"AREA OF CIRCLE = "<<ob.area()<<endl;
	cout<<"PERIMETER OF CIRCLE = "<<ob.pari()<<endl;
	cout<<"PERIMETER OF CYLINDER = "<<ob.paricylinder()<<endl;
	cout<<"VOLUME OF CYLINDER = "<<ob.volumecylinder()<<endl;
	cout<<"VOLUME OF CONE = "<<ob.volumecone()<<endl;
	cout<<"PERIMETER OF CONE = "<<ob.paricone();
	return 0;
}
