// Problem Link - https://atcoder.jp/contests/abc130/tasks/abc130_b

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void OnlineJudge () {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}


int main() {
	OnlineJudge();
	ios_base::sync_with_stdio(false); 
	cin.tie(0);

	ll n,x;
	cin>>n>>x;

	ll arr[n+1];
	for(int i=1;i<=n;i++)cin>>arr[i];

	ll dp[n+2];

    dp[0] = 0;
    dp[1] = 0;

    for(int i=2;i<=(n+1);i++){
    	dp[i] = dp[i-1] + arr[i-1];
    }

    ll count = 0;

    for(int i=1;i<=(n+1);i++){
    	if ( dp[i] <= x ) count++;
    }

    cout<<count<<endl;

	return 0;

}

