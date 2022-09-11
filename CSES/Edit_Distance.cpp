//  Problem Link - https://cses.fi/problemset/task/1639/

#include <bits/stdc++.h>
using namespace std;
 
 
int main(){ 
 
// state = dp[i][j] edit distance till string a[i] and b[j]
// Delete a[i] = dp[i-1][j]
// Delete b[j] = dp[i][j-1]
// Add one Char at a[i] = dp[i-1][j]
// Add one Char at b[i] = dp[i][j-1]
// Replace one Char in both a[i] to b[j] = dp[i-1][j-1]
// When both are same ( a[i] == b[j]) = dp[i-1][j-1]
// base case = dp[0][0] = 0
// final sub-problem = dp[n][m]
 
   string a , b;
   cin>>a>>b;
 
   long long n = a.length();
   long long m = b.length();
 
   vector<vector<long long>> dp(n+1, vector<long long>(m+1,1e10));
   
    for (int i = 1; i <= n; i++)
        dp[i][0] = i;
    
    for (int j = 1; j <= m; j++)
        dp[0][j] = j;
 
 
   dp[0][0] = 0;
 
   for(int i=1;i<=n;i++){
       
       for(int j=1;j<=m;j++){
           
           if ( a[i-1] == b[j-1] ) {
               dp[i][j] = dp[i-1][j-1];
           }
           
           else {
               dp[i][j] =  1 + min({ dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
           }
           
       }
   }
   
   cout<<dp[n][m]<<endl;
 
 
    return 0;
}
