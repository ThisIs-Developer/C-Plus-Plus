#include<iostream>
using namespace std;
int main()
{
	int *p;
	p=(int*)malloc(sizeof(int));
	*p=50;
	cout<<"ADDRESS = "<<p<<endl;
	cout<<"VALUE = "<<*p;
	free(p);
	return 0;
}