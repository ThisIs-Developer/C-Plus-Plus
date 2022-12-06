#include<iostream>
using namespace std;
class cal
{
	public:
		void addition(int x,int y);
};
void cal::addition(int x,int y)
{
	cout<<"IN ADDITION"<<endl;
	int result=x+y;
	cout<<"RESULT = "<<result;
}
int main()
{
	int a=10;
	int b=20;
	cal ob;
	ob.addition(a,b);
	return 0;
}
