#include<iostream>
using namespace std;
template<class T>
class Number{
    private:
        T x;
    public:
        Number(T N){
		x=N;
        }
    T getnum(){
    	return x;
      }
};
int main(){
    Number<int>newob(7);
    cout<<"Int NUM:"<<newob.getnum();
    return 0;
}