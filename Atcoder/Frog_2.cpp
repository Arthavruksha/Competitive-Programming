// Problem Link - https://atcoder.jp/contests/dp/tasks/dp_b

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
 
	long long n,k;
	cin>>n>>k;
	long long arr[n+1];
	for(int i=1;i<=n;i++)cin>>arr[i];
	vector <long long> dp(n+1);
 
    dp[1] = 0;
 
    for(int i=2;i<=n;i++ ){
 
    	dp[i] = 1e10;
 
    	for(int j=1;j<=k;j++) {
 
    		if (i-j>=1) {
 
    			dp[i] = min( dp[i], dp[i-j] + abs(arr[i]-arr[i-j]) );
    		}
    	}
 
    }
 
    cout<<dp[n]<<endl;
 
    return 0;
}
 
