#include<iostream>
using namespace std;
int main()
{
	int *p;
	p=new int[2];
	*(p+0)=10;
	*(p+1)=20;
	cout<<"P[O] = "<<p[0]<<endl;
	cout<<"P[1] = "<<p[1]<<endl;
	delete []p;
	cout<<"P[O] = "<<p[0]<<endl;
	cout<<"P[1] = "<<p[1]<<endl;
	return 0;
}
