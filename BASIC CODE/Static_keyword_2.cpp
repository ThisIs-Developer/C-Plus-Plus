#include<iostream>
using namespace std;
void display()
{
	static int x=1;
	cout<<"X = "<<x<<endl;
	x++;
}
int main()
{
	for(int i =0;i<5;i++)
	{
		display();
	}
	return 0;
}
