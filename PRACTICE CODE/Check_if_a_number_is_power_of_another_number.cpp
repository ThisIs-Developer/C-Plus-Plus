#include<bits/stdc++.h> 
using namespace std; 
class Solution{   
public:
    int isPowerOfAnother(long long X, long long Y){
        if (X == 1)
        return (Y == 1);
    long int pow = 1;
    while (pow < Y)
        pow *= X;
    return (pow == Y);
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long int X, Y;
        cin >> X >> Y;
        Solution ob;
        cout << ob.isPowerOfAnother(X,Y) << endl;
    }
    return 0; 
}