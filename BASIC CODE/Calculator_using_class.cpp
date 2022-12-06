#include<iostream>
using namespace std;
class cal
{
	public:
		void add(int x,int y);
		void sub(int x,int y);
		void mul(int x,int y);
		void divi(int x,int y);
};
void cal::add(int x,int y)
{
	cout<<"IN ADDITION"<<endl;
	int result=x+y;
	cout<<"RESULT = "<<result<<endl;
}
void cal::sub(int x,int y)
{
	cout<<"IN SUBSTRATION"<<endl;
	int result=x-y;
	cout<<"RESULT = "<<result<<endl;
}
void cal::mul(int x,int  y)
{
	cout<<"IN MULTIPLICATION"<<endl;
	int result=x*y;
	cout<<"RESULT = "<<result<<endl;
}
void cal::divi(int x,int y)
{
	cout<<"IN DIVISION"<<endl;
	int result=x/y;
	cout<<"RESULT = "<<result<<endl;
}
int main()
{
	cal ob;
	int choice;
	int a,b;
	for(;;)
	{
	cout<<" (1)ADDITION\n (2)SUBSTRUCTION\n (3)MULTIPLICTION\n (4)DIVISION\n (5)EXIT\n";
	cout<<"\nENTRE YOUR CHOICE = ";
	cin>>choice;
	switch(choice)
	{
		case 1 :
			{
				ob.add(6,8);
				break;
			}
		case 2 :
			{
				ob.sub(6,8);
				break;
			}
		case 3 :
			{
				ob.mul(6,8);
				break;
			}
		case 4 :
			{
				ob.divi(6,8);
				break;
			}
		case 5 :
			{
				cout<<"EXIT"<<endl;
				return 0;
			}
	}
	}
	return 0;
}
