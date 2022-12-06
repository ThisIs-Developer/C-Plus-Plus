#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
class Solution{
  public:
    bool findTriplets(int arr[], int n)
    { 
        sort(arr,arr+n);
	    for(int i=0; i<n; i++){
	        int left=i+1;
	        int right=n-1;
	        while(left<right){
	            int s=arr[i]+arr[left]+arr[right];
	            if(s == 0){
	               return true;
	            }
	            else if(s > 0) right--;
	            else left++;
	        }
	    }
return false;
    }
};
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}