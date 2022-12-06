#include<iostream>
using namespace std;
class shape{
	public:
		virtual void area()=0;
};
class rect:public shape{
	public :
		int l,w;
		rect(int a, int b){
			l=a;
			w=b;
		}
		void area(){
			cout<<"Area: "<<l*w<<endl;
		}
};
class Tri:public shape{
	public:
		float a,b;
		Tri(float a1,float b1){
			a=a1;
			b=b1;
		}
		void area(){
			cout<<"Area="<<0.5*a*b<<endl;
		}
};
class Circle:public shape{
	public:
		float r;
		Circle(float a1){
			r=a1;
		}
		void area(){
			cout<<"Area="<<3.14*r*r<<endl;
		}
};
int main(){
	rect ob(5,10);
	Tri ob1(6,8);
	Circle ob2(7);
	ob.area();
	ob1.area();
	ob2.area();
			return 0;
	
}
