//  Problem Link - https://www.codechef.com/ZCOPRAC/problems/ZCO14004?tab=statement


#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long n;
    cin>>n;
    
    long long arr[n];
    long long sum = 0;
    
    for (int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    
    vector <int> dp(n);
    
    
    for (int i=0;i<n;i++){
        
        dp[0] = arr[0];
        dp[1] = arr[1];
        dp[2] = arr[2];
        
        if (i>2) {
            dp[i] = min({ dp[i-1] , dp[i-2] , dp[i-3] }) + arr[i] ;
        }
        
    }
    
    int ans = 0;
    
    for (int i=0;i<n;i++){
        ans+= arr[i];
    }
    int x = min({dp[n-1],dp[n-2],dp[n-3]});
    cout<<ans - x<<endl;


    return 0;
}
