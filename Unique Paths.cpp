#include <bits/stdc++.h> 
//Top down
//int traversal(int i, int j, vector<vector<int>> &dp){
//  if(i==0 and j==0) return 1;
    
//  if(dp[i][j]!=0) return dp[i][j];
    
//  if(i>0) dp[i][j] += traversal(i-1, j, dp);
//  if(j>0) dp[i][j] += traversal(i, j-1, dp);


//  return dp[i][j];
//}


int uniquePaths(int m, int n) {
    //vector<vector<int>> dp(m, vector<int> (n, 0));
    //return traversal(m-1,n-1,dp);
    
    //Botom up
    //vector<vector<int>> dp (m, vector<int> (n, 0));
    //dp[0][0] = 1;
    //for(int i=0;i<m;i++) {
    //  for(int j=0;j<n;j++) {
    //      if(i>0) dp[i][j] += dp[i-1][j];
    //      if(j>0) dp[i][j] += dp[i][j-1];
    //  }
    //}
    //return dp[m-1][n-1];


    //Space optimization
    vector<int> prev(n, 1);
    for(int i=1;i<m;i++) {
        vector<int> cur(n, 0);
        for(int j=0;j<n;j++) {
            if(j>0) cur[j] += cur[j-1];
            cur[j] += prev[j];
        }
        prev = cur;
    }
    return prev[n-1];
}
