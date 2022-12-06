#include<iostream>
using namespace std;
void display()
{
	static int x=1;
	cout<<"x = "<<x<<endl;
	x++;
}
int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		display();
	}
	return 0;
}
