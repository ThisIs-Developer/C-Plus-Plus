//hybrid using multilevel
#include<iostream>
using namespace std;
class A
{
	public:
		void displayA()
		{
			cout<<"IN CLASS A"<<endl;
		}
};
class B:public A
{
	public:
		void displayB()
		{
			cout<<"IN CLASS B"<<endl;
		}
};
class C:public B
{
	public:
		void displayC()
		{
			cout<<"IN CLASS C"<<endl;
		}
};
class D:public B
{
	public :
		void displayD()
		{
			cout<<"IN CLASS D"<<endl;
		}
};
int main()
{
	C ob;
	ob.displayA();
	ob.displayB();
	ob.displayC();
	C ob1;
	ob1.displayA();
	ob1.displayB();
	ob1.displayC();
	D ob2;
	ob2.displayA();
	ob2.displayB();
	ob2.displayD();
	return 0;
}
