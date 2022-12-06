#include <iostream>    
using namespace std;    
class num    
{    
    private:    
        int value;   
    public:    
        num(): value(0) { }    
        friend int print(num);   
};    
int print(num n)    
{   
	n.value+=10;   
    return n.value;    
}    
int main()    
{    
    num n;    
    cout<<"Value of num "<< print(n)<<endl;    
    return 0;    
}    