#include<iostream>
using namespace std;
int main()
{
    int num,m=0,i;
    int flag=0;
    cout<<"ENTRE THE RANGE : ";
    cin>>num;
    m=num/2;
    for(i=2;i<=m;i++)
    {
        if(num%i==0)
        {
            cout<<"NUMBER IS NOT PRIME"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<"PRIME NUMBER"<<endl;
    return 0;
}