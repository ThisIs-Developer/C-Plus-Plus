#include<bits/stdc++.h>
using namespace std;   
class Solution{ 
public:
    string onesComplement(string S,int N){
        string s1;
        for( int i=0;i<N;i++)
        {
            if(S[i]=='1')
            {
                s1.push_back('0');
            }
            else if(S[i]=='0')
            {
                s1.push_back('1');
            }
        }
    
        return s1;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.onesComplement(s,n)<<"\n";
    }
}