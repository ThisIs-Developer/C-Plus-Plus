#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<int> kLargest(int arr[], int n, int k)
    {
         priority_queue<int> pq;
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	        pq.push(arr[i]);
	    }
	         int j=0;
	    while(j<k)
	    {
	        v.push_back(pq.top());
	        pq.pop();
	        j++;
	    }
	    return v;
    }
};
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int> result = ob.kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
    }
    return 0;
}