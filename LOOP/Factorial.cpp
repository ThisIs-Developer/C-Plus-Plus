#include<iostream>
using namespace std;
int main()
{
    int num,i;
    int fact=1;
    cout<<"ENTRE THE VALUE : ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"FACTORIAL : "<<fact;
    return 0;
}