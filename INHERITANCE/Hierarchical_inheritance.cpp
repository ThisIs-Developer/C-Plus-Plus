#include<iostream>
using namespace std;
class A{
	public :
		void displayA(){
			cout<<"In A class\n";
		}
};
class B:public A{
	public :
		void displayB(){
			cout<<"In B class\n";
		}
};
class C:public A{
	public :
		void displayC(){
			cout<<"In C class\n";
		}
};
class D:public B,public C{
	public :
		void displayD(){
			cout<<"In D class\n";
		}
};
int main (){
	B ob;
	ob.displayA();
	ob.displayB();
	C obc;
	obc.displayA();
	obc.displayC();
	D obd;
	obd.displayB();
	obd.displayC();
	obd.displayD();
	return 0;
}

