#include<iostream>
using namespace std; 
int binarySearch(int arr[], int low, int high);
int main()
{
	int test =0; 
	cin>>test;
	while(test--)
	{
	    int n, i; 
	    cin>>n; 
	    int a[n]; 
	    for(i=0; i<n; i++)
	    cin>>a[i]; 
	    
	    cout<<binarySearch(a, 0, n-1)<<endl; 
	}
}
int binarySearch(int arr[], int low, int high)
{
       while(low<=high){
         int mid=low+(high-low)/2;
         if(arr[mid]>mid)high=mid-1;
         else if(arr[mid]<mid)low=mid+1;
         else return mid;
     }
     return -1;
}