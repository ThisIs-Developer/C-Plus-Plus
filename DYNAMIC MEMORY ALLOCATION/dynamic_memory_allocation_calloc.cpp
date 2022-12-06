#include<iostream>
using namespace std;
int main()
{
	int *p;
	p=(int*)calloc(sizeof(int),1);
	*p=50;
	cout<<"ADDRESS = "<<p<<endl;
	cout<<"VALUE = "<<*p;
	free(p);
	return 0;
}