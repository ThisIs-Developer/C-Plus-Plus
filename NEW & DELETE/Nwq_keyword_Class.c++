#include<iostream>
using namespace std;
class A{
	public:
		A()
		{
			cout<<"IN A CLASS "<<endl;
		}
};
int main()
{
	A *p;
	p=new A;
	return 0;
}
