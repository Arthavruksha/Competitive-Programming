//  Problem Link - https://www.codechef.com/ZCOPRAC/problems/ZCO12004?tab=statement


#include <bits/stdc++.h>
using namespace std;
 
void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
} 

int main() {
	OnlineJudge();

    long long n;
    cin>>n;

    long long arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    vector <long long > dp(n);

    dp[0] = arr[0];
    dp[1] = arr[1];

    for(int i=2;i<n;i++) {  
        dp[i] = min( dp[i-1] , dp[i-2] ) + arr[i];
    }

    long long dp1 = dp[n-1];

    dp[0] = arr[0];
    dp[1] = arr[1]+arr[0];

    for(int i=2;i<n;i++) {
        dp[i] = min( dp[i-1] , dp[i-2] ) + arr[i];
    }

    cout<<min( { dp1, dp[n-1] , dp[n-2] } )<<endl;


    return 0;
}

