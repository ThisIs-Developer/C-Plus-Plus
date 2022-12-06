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
	ex *p;
	p=&e;
	p->x=10;
	p->y=20.500;
	p->z='A';
	cout<<"X = "<<p->x;
	cout<<"Y = "<<p->y;
	cout<<"Z = "<<p->z;
	return 0;
}
