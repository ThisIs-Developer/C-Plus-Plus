#include<iostream>
using  namespace std;
template <typename T>
 T add(T a,T b){
    return a+b;
}
int main(){
    int result= add<int>(3,4);
    
cout<<result<<endl;
cout<<add<double>(5.90,6.98);
	return 0;
}