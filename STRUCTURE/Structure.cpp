#include<iostream>
using namespace std;
struct example
{
	int x;
	float y;
	char z;
};
int main()
{
	typedef struct example ex;
	ex e;
	e.x=10;
	e.y=20.500;
	e.z='A';
	cout<<"X = "<<e.x;
	cout<<"Y = "<<e.y;
	cout<<"Z = "<<e.z;
	return 0;
}
