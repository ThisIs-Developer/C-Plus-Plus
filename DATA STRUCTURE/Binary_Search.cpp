#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        if (arr == NULL) return -1;
        
        int begin = 0;
        int end = k;

            for (; begin < end;)
            {
                int mid = (begin + end) / 2;
                if (arr[mid] == n) return mid;
                if (arr[mid] > n)
                {
                    begin = begin;
                    end = mid; 
                }
                else
                {
                    begin = mid + 1;
                    end = end;
                }
            }
            return -1;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}