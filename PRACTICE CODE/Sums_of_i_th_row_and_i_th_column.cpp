#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int sumOfRowCol(int N, int M, vector<vector<int>> A) {
         int l=min(N,M);
        for(int i=0;i<l;i++){
            int row_sum=0,col_sum=0;
        
        for(int j=0;j<M;j++)
            row_sum+=A[i][j];
        
        for(int j=0;j<N;j++)
            col_sum+=A[j][i];
        if(row_sum!=col_sum)return 0;
        }
         return 1;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> A[i][j];
        Solution ob;
        cout << ob.sumOfRowCol(N, M, A) << "\n";
    }
}